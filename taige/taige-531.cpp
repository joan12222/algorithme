#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,vis[25][25]={0},dis[25][25],ans=INT_MAX;
char a[25][25];
void dfs(int x,int y,int score){
	if(score>=dis[x][y]){
		return;
	}else{
		dis[x][y]=score;
	}
	if(x==n&&y==m){
		ans=min(ans,score);
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0){
			vis[nx][ny]=1;
			if(a[x][y]==a[nx][ny]){
				dfs(nx,ny,score);
			}else{
				dfs(nx,ny,score+1);
			}
			vis[nx][ny]=0;
		}
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<25;i++){
		for(int j=0;j<25;j++){
			dis[i][j]=INT_MAX;
		}
	}
	vis[1][1]=1;
	dfs(1,1,0);
	cout<<ans;
	return 0;
}