#include<bits/stdc++.h>
using namespace std;
int n,m,c,s[100005],in[100005];
vector<pair<int,int>> edges[100005];
queue<int> q;
int main(){
	cin>>n>>m>>c;
	for(int i=1;i<=n;i++) cin>>s[i];
	for(int i=1,x,y,z;i<=c;i++){
		cin>>x>>y>>z;
		edges[x].push_back({y,z});
		in[y]++;
	}
	for(int i=1;i<=n;i++){
		if(in[i]==0) q.push(i);
	}
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<edges[now].size();i++){
			s[edges[now][i].first]=max(s[edges[now][i].first],s[now]+edges[now][i].second);
			in[edges[now][i].first]--;
			if(in[edges[now][i].first]==0) q.push(edges[now][i].first);
		}
	}
	for(int i=1;i<=n;i++) cout<<s[i]<<endl;
	return 0;
}
