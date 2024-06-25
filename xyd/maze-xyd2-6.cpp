#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={1,1,1,0,0,-1,-1,-1};
char a[101][101];
int n,m;
int cnt=0;
void dfs(int x,int y)
{
    int X,Y;
    if(x==n&&y==m){
    	cnt++;
    	return;
	}
    for(int i=0;i<8;i++){
        X=x+dx[i];
        Y=y+dy[i];
        if(X>0&&X<=n&&Y>0&&Y<=m&&a[X][Y]=='W'){
            dfs(X,Y);
        }
    }
    cnt++;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=m;j++){
		    scanf("%c",&a[i][j]);
		}
	}
	dfs(1,1);
	cout<<cnt<<endl;
}