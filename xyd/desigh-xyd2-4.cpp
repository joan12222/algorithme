#include <bits/stdc++.h>
using namespace std;
char a[21][21];
int vis[27]={0};
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m;
int ans=0;
void dfs(int x,int y){
	if(x==n+1&&y==m+1){
		return;
	}
    for(int i=0;i<4;i++){
        int r=x+dx[i];
        int c=y+dy[i];
        if(r<=n&&r>=0&&c<=m&&c>=0&&vis[a[r][c]-'A']==0){
        	ans++;
        	vis[a[r][c]-'A']=1;
			dfs(r,c);
		}
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    dfs(1,1);
    cout<<ans;
    return 0;
}
