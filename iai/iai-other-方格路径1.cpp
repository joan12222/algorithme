#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,f[1005][1005],dis[1005][1005];
char a[1005][1005];
struct Node{
	int x,y;
};
queue<Node> q;
void bfs(){
	memset(dis,0x3f,sizeof(dis));
	dis[1][1]=0;
	f[1][1]=1;
	q.push(Node{1,1});
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='.'){
				if(dis[nx][ny]>dis[now.x][now.y]+1){
					f[nx][ny]=f[now.x][now.y];
					q.push(Node{nx,ny});
				}else if(dis[nx][ny]==dis[now.x][now.y]+1) f[nx][ny]=(f[nx][ny]+f[now.x][now.y])%mod;
				else continue;
				dis[nx][ny]=dis[now.x][now.y]+1;
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	bfs();
	cout<<f[n][m]%mod;
	return 0;
}
