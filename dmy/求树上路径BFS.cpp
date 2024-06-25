#include<bits/stdc++.h>
using namespace std;
int n,u,v,vis[100005];
vector<int> edges[100005],path; 
void bfs(){
	queue<int> q;
	q.push(u);
	vis[u]=1;
	path.push_back(u);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==v){
			for(int i=0;i<path.size();i++) cout<<path[i]<<" ";
			break;
		}
		for(int i=0;i<edges[now].size();i++){
			int y=edges[now][i];
			if(!vis[y]){
				vis[y]=1;
				path.push_back(y);
				q.push(y);
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1,x,y;i<n;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	cin>>u>>v;
	bfs();
	return 0;
}
