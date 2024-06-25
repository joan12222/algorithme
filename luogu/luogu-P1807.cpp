#include<bits/stdc++.h>
using namespace std;
int n,m,edges[1505][1505],dis[1505],vis[1505];
queue<int> q;
void bfs(int s){
	dis[s]=0;
	q.push(s);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(edges[now][i]!=0&&dis[i]<dis[now]+edges[now][i]){
				dis[i]=edges[now][i]+dis[now];
				q.push(i);
			}
		}
	}	
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		edges[x][y]=max(edges[x][y],z);
	}
	memset(dis,-1,sizeof(dis));
	bfs(1);
	cout<<dis[n];
	return 0;
}
