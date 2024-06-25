#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[1001][1001],x[1001],y[1001],vis[1001][1001]={0},cnt=0,sx,sy;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct node{
	int x,y,step;
};
void bfs(int sx,int sy,int ex,int ey){
	queue<node> q;
	q.push(node{sx,sy,0});
	vis[sx][sy]=1;
	while(q.size()){
		node now=q.front();
		q.pop();
		if(now.x==ex&&now.y==ey){
			cnt+=now.step;
			return;
		}
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]==0&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				q.push(node{nx,ny,now.step+1});
			}
		}
	}
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=k;i++){
		cin>>x[i]>>y[i];
		vis[x[i]][y[i]]=1;
	}
	cin>>sx>>sy;
	vis[sx][sy]=0;
	vis[x[1]][y[1]]=0;
	bfs(sx,sy,x[1],y[1]);
	for(int i=1;i<k;i++){
		memset(vis,0,sizeof(vis));
		for(int j=1;j<=k;j++){
			vis[x[j]][y[j]]=1;
		}
		vis[sx][sy]=1;
		vis[x[i]][y[i]]=0;
		vis[x[i+1]][y[i+1]]=0;
		bfs(x[i],y[i],x[i+1],y[i+1]);
	}
	cout<<cnt;
}