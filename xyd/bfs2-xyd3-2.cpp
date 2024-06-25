#include<bits/stdc++.h>
using namespace std;
int n,m;
int sx,sy,fx,fy,inf=0x3f3f3f3f;
int vis[1001][1001],ans[1001][1001];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int res=inf;
char a[1001][1001];
struct node{
	int x,y,step;
};
queue<node> q;
void bfs(){
	//这样赋值之后 ans数组里每个值就是0x3f3f3f3f
	memset(ans,0x3f,sizeof(ans));
	vis[sx][sy]=1;
	//ans数组 保存到达每个点的最少时间
	ans[sx][sy]=0;
	q.push(node{sx,sy,0});
	while(q.size()){
		node now=q.front();
		q.pop();
		//到达终点了
		if(now.x==fx&&now.y==fy){
			res=min(res,now.step);
		}
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			//越界跳过，障碍跳过
			//这个点走过，并且当前到达下个点的时间>=原来到达下个点的时间
			if(nx<1||nx>n||ny<1||ny>m){
				continue;
			}
			if(a[nx][ny]=='#'){
				continue;
			}
			int time=now.step+1;
			if(a[nx][ny]=='G'){
				time++;
			}//有守卫的话 要多花一分钟
			if(vis[nx][ny]&&time>=ans[nx][ny]){
				continue;
			}
			vis[nx][ny]=1;
			ans[nx][ny]=time;
			q.push(node{nx,ny,time});
		}
	}
	if(res==inf){
		cout<<"You can't save Mengxin";
	}else{
		cout<<res;
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='M'){
				fx=i,fy=j;
			}
			if(a[i][j]=='@'){
				sx=i,sy=j;
			}
		}
	}
	bfs();
}
