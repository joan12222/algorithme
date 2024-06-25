#include<bits/stdc++.h>
using namespace std;
int dx[]={1,1,2,2,-1,-1,-2,-2};
int dy[]={2,-2,1,-1,2,-2,1,-1};
int n,m,x,y,ans[405][405];
struct Node{
	int x,y,step;
};
void bfs(int sx,int sy){
	queue<Node> q;
	int vis[405][405]={0};
	memset(ans,0x3f,sizeof(ans));
	q.push({sx,sy,0});
	vis[sx][sy]=1;
	ans[sx][sy]=0;
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				ans[nx][ny]=ans[now.x][now.y]+1;
				q.push({nx,ny,now.step+1});
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m>>x>>y;
	bfs(x,y);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(ans[i][j]==0x3f3f3f3f&&(i!=x||j!=y)) cout<<"-1 ";
			else cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
