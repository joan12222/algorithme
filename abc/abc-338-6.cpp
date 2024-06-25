#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf=1e15;
int n,m,vis[25];
ll f[25][25],cache[(1<<20)+5][25];
bool mem[(1<<20)+5][25];
ll dfs(int u,int done){
	done++;
	if(done<n){
		int bit=0;
		for(int i=1;i<=n;i++){
			if(vis[i]) bit+=(1<<(i-1));
		}
		if(mem[bit][u]) return cache[bit][u];
		vis[u]=1;
		ll res=inf;
		for(int i=1;i<=n;i++){
			if(vis[i]==0) res=min(res,dfs(i,done)+f[u][i]);
		}
		vis[u]=0;
		mem[bit][u]=true;
		return cache[bit][u]=res;
	}else return 0;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) f[i][j]=inf;
	}
	for(int i=1,u,v,w;i<=m;i++){
		cin>>u>>v>>w;
		f[u][v]=w;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
		}
	}
	//cout<<"aaa";
	ll ans=inf;
	for(int start=1;start<=n;start++) ans=min(ans,dfs(start,0));
	if(ans>=1000000LL*400) cout<<"No";
	else cout<<ans;
	return 0;
}
