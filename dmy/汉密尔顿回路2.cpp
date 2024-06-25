#include<bits/stdc++.h>
using namespace std;
int n,m,k,vis[10];
vector<int> edges[10];
bool dfs(int u, int c){
	if(c==n&&u==k) {
		return true;
	}
	for(int i=0;i<edges[u].size();i++){
		int v=edges[u][i];
		if(!vis[v]) {
			vis[v]=true;
			if(dfs(v, c+1)) return true;
			else vis[v]=false;
		}
	}
	return false;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	cin>>k;
	if(dfs(k, 0)) 
		cout<<"Yes";
	else cout<<"No";
	return 0;
}
