#include<bits/stdc++.h>
using namespace std;
const int N=505;
int ans[N][N],vis[N][N];
int n,m,a,b,x,y;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct node{
	int x,y,step;
};
queue<node> q;
void bfs(){
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0){
				vis[nx][ny]=1;//到此一游
				//每到一个新的地方 记录到这个点的时候的最小步数
				ans[nx][ny]=now.step+1;
				q.push(node{nx,ny,now.step+1});
			}
		}
	}
}
int main(){
	cin>>n>>m>>a>>b;
	for(int i=0;i<a;i++){
		scanf("%d%d",&x,&y);
		vis[x][y]=1;
		q.push(node{x,y,0});
	}
	bfs();
	for(int i=0;i<b;i++){
		scanf("%d%d",&x,&y);
		printf("%d\n",ans[x][y]);
	}
}
