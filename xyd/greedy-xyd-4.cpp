#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[51],l,r,sum=0,x=0,y=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cin>>l>>r;
	if(sum>n*r||sum<n*l){
		cout<<"-1";
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			if(a[i]>r){
				x+=a[i]-r;
			}else if(a[i]<l){
				y+=l-a[i];
			}
		}
		cout<<max(x,y);
	}
	return 0;
}