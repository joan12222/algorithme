#include<bits/stdc++.h>
using namespace std;
const int N=305;
int n,sx,sy,ex,ey;
int dx[]={-2,-2,-1,-1,1,1,2,2};
int dy[]={-1,1,-2,2,-2,2,-1,1};
int vis[303][303];
struct node{
	//坐标，到达这个点的步数
	int x,y,step;
};
void bfs(){
	queue<node> q;
	//dfs(sx,sy,0);
	q.push(node{sx,sy,0});
	vis[sx][sy]=1;
	while(q.size()){
		//now当前的位置
		node now=q.front();
		q.pop();//第一个已经被now获取了，把它去掉
		//当前位置 往8个方向扩展
		if(now.x==ex&&now.y==ey){
			cout<<now.step;
			return;
		}
		for(int i=0;i<8;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			//越界 走过的不再走
			if(nx>=0&&nx<=n-1&&ny>=0&&ny<=n-1&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				q.push(node{nx,ny,now.step+1});
			}
		}
	}
}
int main(){
	cin>>n>>sx>>sy>>ex>>ey;
	bfs();
	return 0;	
}