#include<bits/stdc++.h>
using namespace std;
int n,u,v;
vector<int> edges[100005],path; 
void dfs(int x,int fa){
	if(x==v){
		for(int i=0;i<path.size();i++) cout<<path[i]<<" ";
		exit(0);
	}
	for(int i=0;i<edges[x].size();i++){
		int y=edges[x][i];
		if(y==fa) continue;
		path.push_back(y);
		dfs(y,x);
		path.pop_back();
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
	path.push_back(u); 
	dfs(u,0);
	return 0;
}
