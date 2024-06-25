#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct Node{
	int x,y,step;
};
int n,m,vis[1005][1005];
char c[1005][1005];
queue<Node> q;
void bfs(){
	vis[1][1]=1;
	q.push({1,1,0});
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		if(now.x==n&&now.y==m){
			cout<<now.step;
			return;
		}
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&c[nx][ny]=='.'&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				q.push({nx,ny,now.step+1});
			}
		}
	}
	cout<<"No solution";
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>c[i][j];
	}
	bfs();
	return 0;
}
