#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0,maxx=INT_MIN;
	for(int i=1;i<=n-6;i++){
		ans=a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4]+a[i+5]+a[i+6];
		if(ans>maxx){
			maxx=ans;
		}
	}
	cout<<maxx;
	return 0;
}