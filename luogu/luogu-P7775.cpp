#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,if_tree[505][505],sx,sy,ex,ey,ans,vis[505][505];
char a[505][505];
struct Node{
	int x,y,dis;
};
queue<Node> q,q1;
bool bfs(int x,int y){
	if(x==ex&&y==ey) return true;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<1||nx>n||ny<1||ny>m||vis[nx][ny]==1) continue;
		vis[nx][ny]=1;
		if(bfs(nx,ny)) return true; 
	}
	return false;
}
bool validate(int mid){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) vis[i][j]=if_tree[i][j];
	}
	q1=q;
	while(!q1.empty()){
		Node now=q1.front();
		q1.pop();
		if(now.dis>=mid-1) continue;
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx<1||nx>n||ny<1||ny>m||vis[nx][ny]==1) continue;
			vis[nx][ny]=1;
			q1.push({nx,ny,now.dis+1});
		}
	}
	if(vis[sx][sy]==1) return false;
	return bfs(sx,sy);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='+'){
				q.push({i,j,0});
				if_tree[i][j]=1;
			}else if(a[i][j]=='V'){
				sx=i;
				sy=j;
			}else if(a[i][j]=='J'){
				ex=i;
				ey=j;
			}
		}
	}
	int left=1,right=n;
	while(left<=right){
		int mid=(left+right)/2;
		if(validate(mid)){
			ans=mid;
			left=mid+1;
		}else right=mid-1;
	}
	cout<<ans;
	return 0;
}
