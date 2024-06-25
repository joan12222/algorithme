#include<bits/stdc++.h>
using namespace std;
int n,m,f[105][105];
int main(){
	memset(f,0x3f,sizeof(f));
	cin>>n>>m;
	for(int i=1;i<=n;i++) f[i][i]=0;
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		f[x][y]=z;
		f[y][x]=z;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<f[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
