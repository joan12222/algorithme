#include<bits/stdc++.h>
using namespace std;
int n,a1[25],a2[25];
int vis[25]={0},ans=0;
void dfs(int k){
	if(k==n+1){
		ans++;
		return;
	}
	if(vis[a1[k]]==0){
		vis[a1[k]]=1;
		dfs(k+1);
		vis[a1[k]]=0;
	}
	if(vis[a2[k]]==0){
		vis[a2[k]]=1;
		dfs(k+1);
		vis[a2[k]]=0;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a1[i]>>a2[i];
	dfs(1);
	cout<<ans;
	return 0;
}
