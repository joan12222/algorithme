#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
	int idx,lab;
};
int n,m,out[200005],rnk[200005],len[200005],nlabel[200005],nrank[200005];
ll sum[200005];
vector<Node> edges[200005];
vector<int> fa[200005];
bool cmp(int x,int y){
	if(nlabel[x]==nlabel[y]) return nrank[x]<nrank[y];
	return nlabel[x]<nlabel[y];
}
void update(int curr_nlabel,int curr_nrank,int u,int node){
	if(curr_nlabel<nlabel[u]){
		nlabel[u]=curr_nlabel;
		nrank[u]=curr_nrank;
		sum[u]=sum[node]+curr_nlabel;
	}else if(curr_nlabel==nlabel[u]){
		if(curr_nrank<nrank[u]){
			nlabel[u]=curr_nlabel;
			nrank[u]=curr_nrank;
			sum[u]=sum[node]+curr_nlabel;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		edges[x].push_back({y,z});
		out[x]++;
		fa[y].push_back(x);
	}
	vector<int> s;
	for(int i=1;i<=n;i++){
		if(out[i]==0) s.push_back(i);
	}
	memset(nlabel,0x3f,sizeof(nlabel));
	memset(nrank,0x3f,sizeof(nrank));
	int tot=0,level=0;
	while(!s.empty()){
		for(auto u:s){
			len[u]=level;
			for(auto e:edges[u]){
				if(len[e.idx]==level-1){
					int curr_nlabel=e.lab,curr_nrank=rnk[e.idx];
					update(curr_nlabel,curr_nrank,u,e.idx);
				}
			}
		}
		sort(s.begin(),s.end(),cmp);
		for(auto u:s) rnk[u]=++tot;
		vector<int> ns;
		for(auto u:s){
			for(auto v:fa[u]){
				out[v]--;
				if(out[v]==0) ns.push_back(v);
			}
		}
		s=ns;
		level++;
	}
	for(int i=1;i<=n;i++) cout<<len[i]<<" "<<sum[i]<<endl;
	return 0;
}
