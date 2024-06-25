#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,vis[105][105];
char a[105][105];
struct Node{
	int x,y;
};
queue<Node> q;
void bfs(int x,int y){
	vis[x][y]=1;
	q.push({x,y});
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		if(now.x==n&&now.y==m){
			cout<<"Yes";
			return;
		}
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]!='#'&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				q.push({nx,ny});
			}
		}
	}
	cout<<"No";
	return;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	bfs(1,1);
	return 0;
}
