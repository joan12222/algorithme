#include<bits/stdc++.h>
using namespace std;
int n,m,g1[10][10],g2[10][10],u[10],vis[10];
void dfs(int k){
	if(k==n+1){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(g1[i][j]!=g2[u[i]][u[j]]) return;
			}
		}
		cout<<"Yes";
		exit(0);
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			u[k]=i;
			dfs(k+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		g1[u][v]=1;
		g1[v][u]=1;
	}
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		g2[u][v]=1;
		g2[v][u]=1;
	}
	dfs(1);
	cout<<"No";
	return 0;
}
