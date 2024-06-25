#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=100003;
int n,m,dist[1000005],vis[1000005],ans[1000005];
vector<int> edges[1000005];
queue<int> q;
void bfs(){
	dist[1]=0;
	vis[1]=1;
	ans[1]=1;
	q.push(1);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<edges[now].size();i++){
			if(vis[edges[now][i]]==0){
				vis[edges[now][i]]=1;
				dist[edges[now][i]]=dist[now]+1;
				q.push(edges[now][i]);
			}
			if(dist[edges[now][i]]==dist[now]+1) ans[edges[now][i]]=(ans[edges[now][i]]+ans[now])%mod;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	bfs();
	for(int i=1;i<=n;i++) cout<<ans[i]<<endl;
	return 0;
}
