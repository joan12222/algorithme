#include<bits/stdc++.h>
using namespace std;
int n,m,s,t,dis[105][20005],ans=0x3f3f3f3f,vis[105][20005];
vector<pair<int,int> > edges[20005];
queue<pair<int,int> > q;
void dijkstra(){
	memset(dis,0x3f,sizeof(dis));
	dis[1][s]=0;
	q.push({1,s});
	while(!q.empty()){
		pair<int,int> now=q.front();
		q.pop();
		vis[now.first][now.second]=0;
		if(now.first>100){
			ans=min(ans,dis[now.first][now.second]);
			continue;
		}
		for(int i=0;i<edges[now.second].size();i++){
			if(dis[now.first+1][edges[now.second][i].first]>dis[now.first][now.second]+edges[now.second][i].second/now.first){
				dis[now.first+1][edges[now.second][i].first]=dis[now.first][now.second]+edges[now.second][i].second/now.first;
				if(vis[now.first+1][edges[now.second][i].first]==0){
					q.push({now.first+1,edges[now.second][i].first});
					vis[now.first+1][edges[now.second][i].first]=1;
				}
			}
		}
	}
}
int main(){
	cin>>n>>m>>t>>s;
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		edges[x].push_back({y,z});
		edges[y].push_back({x,z});		
	}
	dijkstra();
	for(int i=1;i<=100;i++) ans=min(ans,dis[i][t]);
	cout<<ans;
	return 0;
}
