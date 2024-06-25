#include<bits/stdc++.h>
using namespace std;
int n,sz[300005],maxx;
vector<int> edges[300005];
void dfs(int k,int fa){
	sz[k]=1;
	for(auto v:edges[k]){
		if(v!=fa){
			dfs(v,k);
			sz[k]+=sz[v];
		}
	}
}
int main(){
	cin>>n;
	for(int i=1,x,y;i<n;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	dfs(1,0);
	for(auto u:edges[1]) maxx=max(maxx,sz[u]);
	cout<<n-maxx;
	return 0;
}
