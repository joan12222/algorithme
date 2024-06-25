#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> edges[100005];
int vis[100005]={0};
queue<int> q;
void dfs(int k,int sum){
	vis[k]=1;
	cout<<k<<" ";
	if(sum==n) return;
	for(int i=0;i<edges[k].size();i++){
		if(vis[edges[k][i]]==0){
			dfs(edges[k][i],sum+1);
		}
	}
}
void bfs(int k){
	memset(vis,0,sizeof(vis));
	vis[k]=1;
	q.push(k);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		cout<<now<<" ";
		for(int i=0;i<edges[now].size();i++){
			if(vis[edges[now][i]]==0){
				vis[edges[now][i]]=1;
				q.push(edges[now][i]);
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[x].push_back(y);
	}
	for(int i=1;i<=n;i++) sort(edges[i].begin(),edges[i].end());
	dfs(1,0);
	cout<<endl;
	bfs(1);
	return 0;
}
