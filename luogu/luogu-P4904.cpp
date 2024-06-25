#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[2005][2005],f[2005][2005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=m;i++) f[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j==1) f[i][j]=min(f[i-1][j],f[i-1][m])+a[j][i];
			else f[i][j]=min(f[i-1][j-1],f[i-1][j])+a[j][i];
		}
	}
	int ans=INT_MAX;
	for(int i=1;i<=m;i++) ans=min(ans,f[n][i]);
	cout<<ans;
	return 0; 
}
