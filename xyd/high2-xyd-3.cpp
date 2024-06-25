#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[100005]={0,1};
	int len=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=len;j++){
			a[j]*=i;
		}
		for(int j=1;j<=len;j++){
			a[j+1]+=a[j]/10;
			a[j]%=10;
		}
		while(a[len+1]!=0){
			a[len+2]+=a[len+1]/10;
			a[len+1]%=10;
			len++;
		}
	}
	int ans=0;
	for(int i=1;i<=len;i++){
		if(a[i]==x){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}