#include<bits/stdc++.h>
using namespace std;
int n,m,s,dis[100005],vis[100005];
vector<pair<int,int>> edges[100005];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
void calc_dis(){
	memset(dis,0x3f,sizeof(dis));
	q.push({0,s});
	dis[s]=0;
	while(!q.empty()){
		pair<int,int> now=q.top();
		q.pop();
		if(vis[now.second]==1) continue;
		vis[now.second]=1;
		for(int i=0;i<edges[now.second].size();i++){
			if(dis[edges[now.second][i].first]>now.first+edges[now.second][i].second){
				dis[edges[now.second][i].first]=now.first+edges[now.second][i].second;
				if(vis[edges[now.second][i].first]==0) q.push({dis[edges[now.second][i].first],edges[now.second][i].first});
			}
		}
	}
}
int main(){
	cin>>n>>m>>s;
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		edges[x].push_back({y,z});
	}
	calc_dis();
	for(int i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	}
	return 0;
}
