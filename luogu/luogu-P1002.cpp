#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
int dx[]={0,1,1,2,2,-1,-1,-2,-2};
int dy[]={0,2,-2,1,-1,2,-2,1,-1};
int main(){
	long long a[101][101]={0};
	int b[101][101]={0};
	cin>>n>>m>>x>>y;
	a[0][0]=1;
	b[x][y]=1;
	for(int i=0;i<=8;i++){
		if(x+dx[i]>0&&x+dx[i]<=n&&y+dy[i]>0&&y+dy[i]<=m) b[x+dx[i]][y+dy[i]]=1;
	}
	for(int j=1;j<=m;j++){
		if(b[0][j]==0) a[0][j]=a[0][j-1];
	}
	for(int i=1;i<=n;i++){
		if(b[i][0]==0) a[i][0]=a[i-1][0];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(b[i][j]==0) a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n][m];
	return 0;
}
