#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[10005],du[10005];
ll ans,f[10005][15];
vector<int> edges[10005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		du[v]++; 
	}
	queue<int> q;
	for(int i=1;i<=n;i++){
		f[i][a[i]]=1;
		if(du[i]==0) q.push(i);
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0;i<edges[u].size();i++){
			int v=edges[u][i];
			du[v]--;
			if(du[v]==0) q.push(v);
			for(int j=1;j<=a[v];j++) f[v][a[v]]=max(f[v][a[v]],f[u][j]+1);
			for(int j=1;j<=10;j++) f[v][j]=max(f[v][j],f[u][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=10;j++) ans=max(ans,f[i][j]);
	}
	cout<<ans;
	return 0;
}
