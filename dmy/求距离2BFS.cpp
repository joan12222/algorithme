#include<bits/stdc++.h>
using namespace std;
struct Node{
	int v,w;
};
int n,m,q,dis[20005],pre[20005];
vector<Node> edges[20005];
void bfs(int s,int t){
	queue<int> q;
	q.push(s);
	dis[s]=0;
	pre[s]=-1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		if(x==t){
			cout<<dis[t];
			return;
		}
		for(int i=0;i<edges[x].size();i++){
			int y=edges[x][i].v;
			if(y==pre[x]) continue;
			int z=edges[x][i].w;
			if(z==0){
				q.push(y);
				dis[y]=dis[x];
				pre[y]=x;
			}
		}
		for(int i=0;i<edges[x].size();i++){
			int y=edges[x][i].v;
			if(y==pre[x]) continue;
			int z=edges[x][i].w;
			if(z==1){
				q.push(y);
				dis[y]=dis[x]+1;
				pre[y]=x;
			}
		}
	}
}
int main(){
	cin>>n>>m>>q;
	for(int i=1,u,v,w;i<=m;i++){
		cin>>u>>v>>w;
		edges[u].push_back({v,w});
		edges[v].push_back({u,w});
	}
	while(q--){
		memset(dis,0x3f,sizeof(dis));
		int x,y;
		cin>>x>>y;
		bfs(x,y);
	}
	return 0;
}
