#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,sx1,sy1,ex1,ey1,ex2,ey2,cnt=0;
char a[101][101];
int vis[101][101]={0};
bool flag=false;
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
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]!='#'&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				q.push(node{nx,ny,now.step+1});
			}
		}
	}
	cout<<"no way";
	flag=true;
	return;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				sx1=i,sy1=j;
			}else if(a[i][j]=='Q'){
				ex1=i,ey1=j;
			}else if(a[i][j]=='H'){
				ex2=i,ey2=j;
			}
		}
	}
	bfs(sx1,sy1,ex1,ey1);
	if(flag==false){
		memset(vis,0,sizeof(vis));
		bfs(ex1,ey1,ex2,ey2);
	}else{
		return 0;
	}
	if(flag==false){
		cout<<cnt;
	}
	return 0;
}