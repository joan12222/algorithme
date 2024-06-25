#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[1005][1005],vis[1005][1005];
ll f[1005][1005][2];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			f[i][j][0]=f[i][j][1]=-1e18;
		}
	}
	f[1][1][0]=a[1][1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i==1&&j==1) continue;
			f[j][i][0]=max(f[j][i-1][0],max(f[j][i-1][1],f[j-1][i][0]))+a[j][i];
		}
		for(int j=n;j>=1;j--){
			f[j][i][1]=max(f[j][i-1][0],max(f[j][i-1][1],f[j+1][i][1]))+a[j][i];
		}
	}
	cout<<f[n][m][0];
	return 0;
}
