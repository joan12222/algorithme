#include<bits/stdc++.h>
using namespace std;
int n,m,C,D,a[15],b[15],c[15],d[15],f[15][1005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>C>>D;
	for(int i=1;i<=m;i++) cin>>a[i]>>b[i]>>c[i]>>d[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=j/c[i];k>=0;k--) f[i][j]=max(f[i][j],f[i-1][j-k*c[i]]+k*d[i]);
		}
	}
	cout<<f[m][n];
	return 0;
}
