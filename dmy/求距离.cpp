#include<bits/stdc++.h>
using namespace std;
int n,m,k,dis[20005];
vector<int> edges[20005];
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	while(k--){
		memset(dis,-1,sizeof(dis));
		int x,y;
		cin>>x>>y;
		queue<int> q;
		q.push(x);
		dis[x]=0;
		while(!q.empty()){
			int u=q.front();
			q.pop();
			if(u==y){
				cout<<dis[u]<<endl;
				break;
			}
			for(int i=0;i<edges[u].size();i++){
				int v=edges[u][i];
				if(dis[v]==-1){
					dis[v]=dis[u]+1;
					q.push(v);
				}
			}
		}
		cout<<dis[y]<<endl;
	}
	return 0;
}
