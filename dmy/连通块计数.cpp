#include<bits/stdc++.h>
using namespace std;
int n,m,ans,vis[20005];
vector<int> edges[20005];
void dfs(int u){
	vis[u]=1;
	for(int i=0;i<edges[u].size();i++){
		int v=edges[u][i];
		if(vis[v]==0) dfs(v);
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			ans++;
			dfs(i);
		}
	}
	cout<<ans;
	return 0;
}
