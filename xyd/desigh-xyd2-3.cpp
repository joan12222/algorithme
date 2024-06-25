#include <bits/stdc++.h>
using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m;
char a[51][51];
int maxx=-1;
int sum=0;
void dfs(int x,int y){
	if(sum>maxx){
		maxx=sum;
	}
    for(int i=0;i<4;i++){
        int r=x+dx[i];
        int c=y+dy[i];
        if(r<=n&&r>=0&&c<=m&&c>=0&&a[r][c]=='1'){
        	sum++;
        	a[r][c]='0';
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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='1'){
            	dfs(i,j);
            	sum=0;
			}
        }
    }
    cout<<maxx<<endl;
    return 0;
}
