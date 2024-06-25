#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=998244353;
int n,m,du[100005],multi[100005];
vector<int> edges[100005];
queue<int> q;
ll ans=1;
void bfs(){
	q.push(1);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int vis=0;
		for(int i=0;i<edges[u].size();i++){
			if(multi[edges[u][i]]) vis++;
		}
		vis=m-vis-1;
		for(int i=0;i<edges[u].size();i++){
			int v=edges[u][i];
			if(multi[v]) continue;
			multi[v]=vis;
			vis--;
			q.push(v);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1,u,v;i<n;i++){
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
		du[u]++;
		du[v]++;
	}
	for(int i=1;i<=n;i++){
		if(du[i]>=m){
			cout<<"0";
			return 0;
		}
	}
	multi[1]=m;
	bfs();
	for(int i=1;i<=n;i++) ans=ans*multi[i]%mod;
	cout<<ans;
	return 0;
}
