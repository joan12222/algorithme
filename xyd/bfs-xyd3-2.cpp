#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int n,m,sx,sy,ex,ey;
char g[205][205];
int vis[205][205],ans1[205][205],ans2[205][205];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct node{
	int x,y,step;
};
void bfs(int sx,int sy,int ans[205][205]){
	//初始化
	queue<node> q;
	vis[sx][sy]=1;
	ans[sx][sy]=0;
	q.push(node{sx,sy,0});
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&g[nx][ny]!='#'&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				//到达下一步距离=到达当前位置的距离+1
				ans[nx][ny]=ans[now.x][now.y]+1;
				q.push(node{nx,ny,now.step+1});
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
			if(g[i][j]=='@'){
				sx=i,sy=j;
			}
			if(g[i][j]=='&'){
				ex=i,ey=j;
			}
		}
	}
	//起点出发，ans1存储
	memset(ans1,0x3f,sizeof(ans1));
	bfs(sx,sy,ans1);
	//把vis数组清空
	memset(vis,0,sizeof(vis));
	//我朋友位置出发，ans2存储
	memset(ans2,0x3f,sizeof(ans2));
	bfs(ex,ey,ans2);
	int res=inf;//答案一开始是一个很大的值
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//当前这个位置是肯德基 我可以到达 朋友可以到达
			if(g[i][j]=='F'&&ans1[i][j]!=inf&&ans2[i][j]!=inf){
				res=min(res,ans1[i][j]+ans2[i][j]);
			}
		}
	}
	if(res==inf){
		cout<<"Meeting cancelled";
	}else{
		cout<<res;
	}
	return 0;	
}