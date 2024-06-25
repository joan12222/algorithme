#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char mp[50][50];
int n,m;
int vis[50][50],ans=INT_MAX,A,B,C,D;//标记每个点是否走过
void dfs(int x,int y,int step){
	if(step>=ans){
		return;
	}
	if(x==C&&y==D){//到终点
		ans=step;
		return;
	}
	for(int i=0;i<4;i++){//遍历四个方向
		int r=x+dx[i];//计算新行
		int c=y+dy[i];//计算新列
		if(r<1||c<1||r>n||c>m||mp[r][c]=='#'||vis[r][c]){//走出地图||撞墙||走过
			continue;
		}
		vis[r][c]=1;//标记新坐标走过
		dfs(r,c,step+1);//从新坐标开始搜索
		vis[r][c]=0;//回溯
	}
}
int main(){
	//输入，构建迷宫地图
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
		}
	}
	cin>>A>>B>>C>>D;
	vis[A][B]=1;//标记起点已经走过
	dfs(A,B,0);
	if(ans==INT_MAX){
		cout<<"-1";
	}else{
		cout<<ans;
	}
	return 0;
}