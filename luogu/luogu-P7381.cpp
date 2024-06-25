#include<bits/stdc++.h>
using namespace std;
int n,m,k,p[505],b[505],f[505][505];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) cin>>p[i];
	for(int i=1;i<=m+1;i++) cin>>b[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<=k;j++){
			for(int w=0;w<=j;w++){
				f[i][j]=max(f[i][j],f[i-1][w]+b[p[i]+j-w+1]);
			}
		}
	}
	cout<<f[n][k];
	return 0;
}
