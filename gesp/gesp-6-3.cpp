#include<bits/stdc++.h>
using namespace std;
int n,m,a[105],b[10005],f[10005],ans=-2e9;
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	memset(f,-0x3f,sizeof(f));
	f[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<m;j++){
			if(i-a[j]>=0) f[i]=max(f[i],f[i-a[j]]+b[i-a[j]]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i+a[j]>=n){
				ans=max(ans,f[i]+b[i]);
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
