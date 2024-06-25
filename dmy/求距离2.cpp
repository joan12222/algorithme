#include<bits/stdc++.h>
using namespace std;
struct Node{
	int nxt,len;
};
int n,m,k,vis[20005],dis[20005];
vector<Node> edges[20005];
void bfs(int x,int y){
	queue<int> q;
	q.push(x);
	dis[x]=0;
	vis[x]=1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		if(u==y){
			cout<<dis[u];
			return;
		}
		for(int i=0;i<edges[u].size();i++){
			int v=edges[u][i].nxt;
			if(vis[v]) continue;
			int w=edges[u][i].len;
			if(w==0){
				q.push(v);
				dis[v]=dis[u]+1;
				vis[v]=1;
			}
		}
		for(int i=0;i<edges[u].size();i++){
			int v=edges[u][i].nxt;
			if(vis[v]) continue;
			int w=edges[u][i].len;
			if(w==1){
				q.push(v);
				dis[v]=dis[u]+1;
				vis[v]=1;
			}
		}
	}
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edges[u].push_back({v,w});
		edges[v].push_back({u,w});
	}
	while(k--){
		memset(dis,0x3f,sizeof(dis));
		memset(vis,0,sizeof(vis));
		int x,y;
		cin>>x>>y;
		bfs(x,y);
	}
	return 0;
}
