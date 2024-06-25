#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char a[101][101];
struct node{
	int x,y;
};
queue<node> q;
void bfs(int x,int y){
	q.push(node{x,y});
	a[x][y]='0';
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]!='0'){
				a[nx][ny]='0';
				q.push(node{nx,ny});
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!='0'){
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout<<cnt;
}