#include<bits/stdc++.h>
using namespace std;
int n,p,a[5000005],d[5000005];
int main(){
	cin>>n>>p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	for(int i=1,x,y,z;i<=p;i++){
		cin>>x>>y>>z;
		d[x]+=z;
		d[y+1]-=z;
	}
	int num=0,ans=200;
	for(int i=1;i<=n;i++){
		num+=d[i];
		ans=min(ans,num);
	}
	cout<<ans;
	return 0;
}
