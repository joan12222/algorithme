#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105],f[105][105];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int dfs(int x,int y){
	if(f[x][y]!=-1) return f[x][y];
	int maxx=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]<a[x][y]) maxx=max(maxx,dfs(nx,ny)+1);
	}
	f[x][y]=maxx;
	return maxx;
}
int main(){
	memset(f,-1,sizeof(f));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	int ans=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			ans=max(ans,dfs(i,j));
		}
	}
	cout<<ans;
	return 0;
}
