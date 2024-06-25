#include<bits/stdc++.h>
using namespace std;
int n,ans,node,dis[100005];
vector<int> edges[100005]; 
void dfs(int x,int fa,int sum){
	dis[x]=sum;
	for(int i=0;i<edges[x].size();i++){
		int y=edges[x][i];
		if(y!=fa) dfs(y,x,sum+1);
	}
}
int main(){
	cin>>n;
	for(int i=1,x,y;i<n;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	dfs(1,0,0);
	for(int i=1;i<=n;i++){
		if(dis[i]>dis[node]) node=i;
	}
	dfs(node,0,0);
	for(int i=1;i<=n;i++) ans=max(ans,dis[i]);
	cout<<ans;
	return 0;
}
