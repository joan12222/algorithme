#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,-2,-2,1,1,2,2};
int dy[]={-2,2,-1,1,-2,2,-1,1};
int n,m,vis[1001][10001],ans[1001][1001],sx,sy;
struct node{
	int x,y,step;
};
void bfs(){
	queue<node> q;
	q.push(node{sx,sy,0});
	vis[sx][sy]=1;
	ans[sx][sy]=0;
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>0&&nx<=n&&ny>0&&ny<=m&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				ans[nx][ny]=ans[now.x][now.y]+1;
				q.push(node{nx,ny,now.step+1});
			}
		}
	}
	return;
}
int main(){
	memset(ans,-1,sizeof(ans));
	memset(vis,0,sizeof(vis));
	scanf("%d%d%d%d",&n,&m,&sx,&sy);
	bfs();
	for(int i=1;i<=n;i++){	
		for(int j=1;j<=m;j++){
			printf("%-5d",ans[i][j]);
		}
		printf("\n");
	}
	return 0;	
}