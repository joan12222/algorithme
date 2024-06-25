#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,a[1005][1005],vis[1005][1005]={0},dis[1005][1005]={INT_MIN},ans=INT_MIN;
void dfs(int x,int y,int num){
	if(num<=dis[x][y]){
		return;
	}else{
		dis[x][y]=num;
	}
	if(x==n&&y==m){
		ans=max(ans,num);
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0){
			vis[nx][ny]=1;
			dfs(nx,ny,num+a[nx][ny]);
		}
	}
}
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	dfs(1,1,0);
	cout<<ans;
	return 0;
}