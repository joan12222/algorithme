#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
int n,m,sx,sy,fx,fy;
int a[101][101],vis[101][101];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int res=inf;
struct node{
	int x,y,step;
};
queue<node> q;
void bfs(){
	q.push(node{sx,sy,0});
	vis[sx][sy]=1;
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			while(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]==0){
				if(vis[nx][ny]==0){
					if(nx==fx&&ny==fy){
						res=now.step;
					}
					q.push(node{nx,ny,now.step+1});
					vis[nx][ny]=1;
				}
				nx+=dx[i];
				ny+=dy[i];
			}
		}
	}
	if(res==inf){
		cout<<"-1";
	}else{
		cout<<res;
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	cin>>sx>>sy>>fx>>fy;
	if(sx==fx&&sy==fy){
		cout<<"0";
		return 0;
	}
	bfs();
}
