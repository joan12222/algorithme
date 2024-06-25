#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,s,k1,k2;
vector<pair<int,int>> edges[100005];
ll dis[100005]={0};
int vis[100005]={0};
ll calc_dis(int s,int e){
	memset(dis,0x3f,sizeof(dis));
	memset(vis,0,sizeof(vis));
	queue<pair<int,ll>> q;
	dis[s]=0;
	q.push({s,0});
	vis[s]=1;
	while(!q.empty()){
		pair<int,ll> now=q.front();
		q.pop();
		for(int i=0;i<edges[now.first].size();i++){
			if(dis[edges[now.first][i].first]>dis[now.first]+edges[now.first][i].second){
				dis[edges[now.first][i].first]=dis[now.first]+edges[now.first][i].second;
				vis[edges[now.first][i].first]=1;
				q.push({edges[now.first][i].first,dis[edges[now.first][i].first]});
			}
		} 
	}
	return dis[e];
}
int main(){
	cin>>n>>m>>s>>k1>>k2;
	for(int i=1,x,y,z;i<=n;i++){
		cin>>x>>y>>z;
		edges[x].push_back({y,z});
		edges[y].push_back({x,z});
	}
	ll ans1=calc_dis(s,k1);
	ll ans2=calc_dis(s,k2);
	ll ans3=calc_dis(k1,k2);
	cout<<min(ans1+ans3,ans2+ans3);
	return 0;
}
