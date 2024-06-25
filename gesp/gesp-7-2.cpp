#include<bits/stdc++.h>
using namespace std;
int n,m,s,t,a[100005],dis[100005];
vector<int> edges[100005];
int main(){
	cin>>n>>m>>s>>t;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
	}
	queue<int> q;
	memset(dis,-1,sizeof(dis));
	q.push(s);
	dis[s]=0;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		if(u==t){
			cout<<dis[u]-a[s]+a[t];
			return 0;
		}
		for(int i=0;i<edges[u].size();i++){
			int v=edges[u][i];
			if(dis[v]==-1){
				dis[v]=dis[u]+1;
				q.push(v);
			}
		}
	}
	cout<<"No solution";
	return 0;
}
