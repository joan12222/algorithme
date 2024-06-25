#include<bits/stdc++.h>
using namespace std;
int n,m,k,f[105][105][105];
char c[105][105];
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>c[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int z=k;z>=0;z--){
				f[i][j][z]=max(f[i-1][j][z],f[i][j-1][z]);
				if(c[i][j]=='1') f[i][j][z]++;
				if(c[i][j]=='?'&&z!=k) f[i][j][z+1]=max(f[i][j][z+1],f[i][j][z]+1); 
				//Ì«Ñ·ÁË£¡ 
			}
		}
	}
	cout<<f[n][m][k];
	return 0;
}
