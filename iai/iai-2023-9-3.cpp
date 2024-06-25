#include<bits/stdc++.h>
using namespace std;
int n,x,ans[1<<12][1<<12];
void dfs(int x,int y,int k,int now){
	if(k==0){
		ans[x][y]=now;
		return;
	}
	int len=1<<(k-1);
	dfs(x,y,k-1,now);
	dfs(x,y+len,k-1,now);
	dfs(x+len,y,k-1,now);
	dfs(x+len,y+len,k-1,!now);
}
int main(){
	cin>>n>>x;
	dfs(0,0,n,x);
	for(int i=0;i<1<<n;i++){
		for(int j=0;j<1<<n;j++) cout<<ans[i][j];
		cout<<endl;
	}
	return 0;
}
