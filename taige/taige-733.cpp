#include<bits/stdc++.h>
using namespace std;
int n,m; 
int f[105][105],d[105][105];
int main(){
	freopen("monster.in","r",stdin);
	freopen("monster.out","w",stdout);
	cin>>n>>m;
	/*
	for(int j=m;j>=1;j--){
		for(int i=n-2;i>=1;i--){
			for(int k=i+2;k<=n;k++){
				f[i][j]+=f[k][j+1];
			}
		}
	}
	cout<<f[1][1];
	*/
	for(int i=1;i<=n;i++) f[i][0]=1;
	d[1][1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			f[i][j]=f[i-1][j]%1000007+d[i-1][j]%1000007;
			d[i][j]=f[i-1][j-1]%1000007;
		}
	}
	cout<<(f[n][m]+d[n][m])%1000007;
	return 0;
} 
