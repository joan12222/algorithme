#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105],b[105][105];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int f[105][105]={0};
int F(int x,int y){
	if(f[x][y]) return f[x][y];
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]<a[x][y]) f[x][y]=max(f[x][y],F(nx,ny)+b[nx][ny]);
	}
	return f[x][y];
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>b[i][j];
	}
	int maxans=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) maxans=max(maxans,F(i,j)+b[i][j]);
	}
	cout<<maxans;
	return 0;
}
