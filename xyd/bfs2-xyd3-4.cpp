#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char a[1001][1001];
struct node{
	int x,y;
};
queue<node> q;
void bfs(int x,int y){
	a[x][y]='.';
	q.push(node{x,y});
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='#'){
				a[nx][ny]='.';
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
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=m-1;j++){
			if((a[i][j]=='.'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')||(a[i][j]=='#'&&a[i][j+1]=='.'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')||(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='.'&&a[i+1][j+1]=='#')||(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='.')){
				cout<<"Bad placement.";
				return 0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='#'){
				bfs(i,j); 
				cnt++;
			}
		}
	}
	cout<<"There are "<<cnt<<" ships.";
	return 0;
}
