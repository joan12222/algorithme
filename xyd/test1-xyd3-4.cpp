#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={1,-1,1,0,-1,1,0,-1};
int n,m,cnt=0,ans=0,maxx=INT_MIN;
char a[201][201];
struct node{
	int x,y;
};
queue<node> q;
void bfs(int x,int y){
	ans=1;
	a[x][y]='.';
	q.push(node{x,y});
	while(q.size()){
		node now=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='*'){
				ans++;
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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='*'){
				bfs(i,j);
				cnt++;
				if(ans>maxx){
					maxx=ans;
				}
			}
		}
	}
	cout<<cnt<<" "<<maxx;
	return 0;
}