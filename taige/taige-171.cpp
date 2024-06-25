#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100005];
int n,m;
int d[200005]={0},f[200005],t[200005];
queue<int> q;
int main(){
	cin>>n>>m;
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		d[b]++;
		graph[a].push_back(b);
	}
	for(int i=1;i<=n;i++)
		if(d[i]==0){
			f[i]=1;
			q.push(i);
		}
	int u,k=1;
	while(!q.empty()){
		t[k++]=u=q.front();
		q.pop();
		for(int i=0;i<graph[u].size();i++)
			if(--d[graph[u][i]==0]) q.push(graph[u][i]);
	}
	for(int i=1;i<=n;i++)
		for(int j=0;j<graph[t[i]].size();j++) f[graph[t[i]][j]]=max(f[graph[t[i]][j]],f[t[i]]+1);
	for(int i=1;i<=n;i++) cout<<f[i]<<" ";
	return 0;
} 
