#include <stdio.h>
#include <memory.h>
#include <iostream>
#include <queue>
using namespace std;
int t,n,m,sx,sy,ex,ey,vis[201][201]={0};
char a[201][201];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct node{
	int x,y,step;
};
void bfs(){
	queue<node> q;
	q.push(node{sx,sy,0});
	vis[sx][sy]=1;
	while(q.size()){
		node now=q.front();
		q.pop();
		if(now.x==ex&&now.y==ey){
			cout<<now.step<<endl;
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
	cout<<"oop!"<<endl;
}
int main() {  
	cin>>t;
	for(int k=1;k<=t;k++){
		memset(vis,0,sizeof(vis));
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				if(a[i][j]=='S'){
					sx=i,sy=j;
				}
				if(a[i][j]=='E'){
					ex=i,ey=j;
				}
			}
		}
		bfs();
	}
	return 0;
}