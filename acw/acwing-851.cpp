#include<bits/stdc++.h>
using namespace std;
int n,m,dis[505],a[505][505],vis[505];
void dijkstra(){
	dis[1]=0;
	for(int i=1;i<=n;i++){
		int idx=0;
		for(int j=1;j<=n;j++){
			if(!vis[j]&&(idx==0||dis[idx]>dis[j])) idx=j;
		}
		vis[idx]=1;
		for(int j=1;j<=n;j++) dis[j]=min(dis[j],dis[idx]+a[idx][j]);
	}
}
int main(){
	cin>>n>>m;
	memset(dis,0x3f,sizeof(dis));
	memset(a,0x3f,sizeof(a));
	for(int i=1,u,v,w;i<=m;i++){
		cin>>u>>v>>w;
		a[u][v]=min(a[u][v],w);
	}
	dijkstra();
	if(dis[n]==0x3f3f3f3f) cout<<"-1";
	else cout<<dis[n]; 
	return 0;
}
