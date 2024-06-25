#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char mp[10][10];
int n,m,cnt=0;
int vis[10][10];//标记每个点是否走过
void dfs(int x,int y){
	if(x==n&&y==m){//到终点
		cnt++;//计数++
		return;
	}
	for(int i=0;i<4;i++){//遍历四个方向
		int r=x+dx[i];//计算新行
		int c=y+dy[i];//计算新列
		if(r<1||c<1||r>n||c>m||mp[r][c]=='#'||vis[r][c]){//走出地图||撞墙||走过
			continue;
		}
		vis[r][c]=1;//标记新坐标走过
		dfs(r,c);//从新坐标开始搜索
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
	vis[1][1]=1;//标记起点已经走过
	dfs(1,1);
	cout<<cnt;
	return 0;
}