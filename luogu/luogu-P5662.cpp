#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[105][105],f[10005];
int main(){
	cin>>t>>n>>m;
	for(int i=1;i<=t;i++){
		for(int j=1;j<=n;j++){
			cin>>a[j][i];
		}
	}
	for(int i=1;i<t;i++){
		memset(f,0,sizeof(f));
		int maxx=-1;
		for(int j=1;j<=n;j++){
			for(int k=a[j][i];k<=m;k++){
				f[k]=max(f[k],f[k-a[j][i]]+a[j][i+1]-a[j][i]);
				maxx=max(maxx,f[k]);
			}
		}
		m+=maxx;
	}
	cout<<m;
	return 0;
}
