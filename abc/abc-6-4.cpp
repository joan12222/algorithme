#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,ans[50][50],lastx,lasty;
/*
bool flag=false;
void dfs(int x,int y,int num){
	if(num==n*n){
		flag=true;
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&ans[nx][ny]==0){
			ans[nx][ny]=num;
			dfs(nx,ny,num+1);
			if(flag==false) ans[nx][ny]=0;
			else return;
		}
	}
}
*/
int main(){
	cin>>n;
	ans[(n+1)/2][(n+1)/2]=n*n;
	ans[1][1]=1;
	lastx=1;
	lasty=1;
	//dfs(1,1,2);
	for(int i=2;i<=n*n-1;){
		while(lasty+1<=n&&ans[lastx][lasty+1]==0){
			ans[lastx][lasty+1]=i;
			lasty++;
			i++;
		}
		while(lastx+1<=n&&ans[lastx+1][lasty]==0){
			ans[lastx+1][lasty]=i;
			lastx++;
			i++;
		}
		while(lasty-1>=1&&ans[lastx][lasty-1]==0){
			ans[lastx][lasty-1]=i;
			lasty--;
			i++;
		}
		while(lastx-1>=1&&ans[lastx-1][lasty]==0){
			ans[lastx-1][lasty]=i;
			lastx--;
			i++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(ans[i][j]==n*n) cout<<"T ";
			else cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
