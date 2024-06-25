#include <bits/stdc++.h>
using namespace std;
int dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,1,0,-1,1,0,-1};
int n,m;
char a[101][101];
int cnt=0;
void dfs(int x,int y){
    for(int i=0;i<8;i++){
        int r=x+dx[i];
        int c=y+dy[i];
        if(r<=n&&r>=0&&c<=m&&c>=0&&a[r][c]=='W'){
        	a[r][c]='.';
			dfs(r,c);
		}
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
			//scanf("%c",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='W'){
            	cnt++;
            	dfs(i,j);
			}
        }
    }
    cout<<cnt;
    return 0;
}
