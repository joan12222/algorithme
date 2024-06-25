#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
char b[105][105];
int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={1,-1,0,1,-1,0,1,-1};
void bfs(int x,int y){
	int cnt,nx,ny;
	if(a[x][y]=='*'){
		cnt=0;
		for(int i=0;i<8;i++){
			nx=x+dx[i];
			ny=y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='*') cnt++;
		}
		if(cnt==2||cnt==3) b[x][y]='*';
		else b[x][y]='.';
	}else{
		cnt=0;
		for(int i=0;i<8;i++){
			nx=x+dx[i];
			ny=y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&a[nx][ny]=='*') cnt++;
		}
		if(cnt==3) b[x][y]='*';
		else b[x][y]='.';
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
			bfs(i,j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=b[i][j]){
				cout<<"Other";
				return 0;
			}
		}
	}
	cout<<"Still life";
	return 0;
}
