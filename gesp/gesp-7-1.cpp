#include<bits/stdc++.h>
using namespace std;
int n,m,ans,vis[100005],sum0,sum1;
vector<int> edges[100005];
void dfs(int u,int now){
	vis[u]=1;
	for(int i=0;i<edges[u].size();i++){
		int v=edges[u][i];
		if(vis[v]==0){
			if(now==0) sum1++;
			else sum0++;
			dfs(v,1-now);
		}
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
		sum0=1,sum1=0;
		if(vis[i]==0) dfs(i,0),ans+=min(sum0,sum1);
	}
	cout<<ans<<" "<<n-ans;
	return 0;
}
