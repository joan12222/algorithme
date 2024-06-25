#include<bits/stdc++.h>
using namespace std;
int n,m,u,v,dis,cnt[1005],ans,vis[1005];
vector<int> edges[1005];
void dfs(int k){
	if(k==v){
		dis++;
		for(int i=1;i<=n;i++) cnt[i]+=vis[i];
		return;
	}
	vis[k]=1;
	for(int i=0;i<edges[k].size();i++){
		if(vis[edges[k][i]]==0) dfs(edges[k][i]);
	}
	vis[k]=0;
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	cin>>u>>v;
	dfs(u);
	for(int i=1;i<=n;i++){
		if(cnt[i]==dis) ans++;
	}
	cout<<ans-1;
	return 0;
}
