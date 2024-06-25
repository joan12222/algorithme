#include<bits/stdc++.h>
using namespace std;
int n,m,a[35][35],m1,m2,sx,sy,ex,ey,vis[35][35];
struct Node{
	int x,y,step;
};
queue<Node> q;
void bfs(){
	int dx[]={m1,m1,m2,m2,-m1,-m1,-m2,-m2};
	int dy[]={m2,-m2,m1,-m1,m2,-m2,m1,-m1};
	vis[sx][sy]=1;
	q.push(Node{sx,sy,0});
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		//cout<<now.x<<" "<<now.y<<endl;
		if(now.x==ex&&now.y==ey){
			cout<<now.step;
			return;
		}
		for(int i=0;i<8;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0&&a[nx][ny]!=0&&a[nx][ny]!=2){
				vis[nx][ny]=1;
				q.push(Node{nx,ny,now.step+1});
			}
		}
	}
}
int main(){
	cin>>n>>m>>m1>>m2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]==3){
				sx=i;
				sy=j;
			}
			if(a[i][j]==4){
				ex=i;
				ey=j;
			}
		}
	}
	bfs();
	return 0;
}
