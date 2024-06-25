#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={1,-1,0,1,-1,0,1,-1};
int ans[105][105];
int bfs(int x,int y){
	int num=0;
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='*') num++;
	}
	return num;
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
			if(a[i][j]!='*') ans[i][j]=bfs(i,j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='*') cout<<"*";
			else cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}
