#include<bits/stdc++.h>
using namespace std;
int n,m,minn,ans;
vector<int> edges[200005];
void dfs(int k,int fa){
	for(int i=0;i<edges[k].size();i++){
		if(edges[k][i]==fa) continue;
		if(fa!=0&&edges[edges[k][i]][fa]==0&&edges[fa][edges[k][i]]==0){
			ans++;
			edges[edges[k][i]].push_back(fa);
			edges[fa].push_back(edges[k][i]);
		}
		dfs(edges[k][i],k);
	}
}
int main(){
	cin>>n>>m;
	minn=n+1;
	for(int i=1,u,v;i<=m;i++){
		cin>>u>>v;
		minn=min(minn,u);
		minn=min(minn,v);
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	if(minn==n+1){
		cout<<"0";
		return 0;
	}
	dfs(minn,0);
	cout<<ans;
	return 0;
}
