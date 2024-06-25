#include<bits/stdc++.h>
using namespace std;
const int mod=80112002;
int n,m,in[5005],out[5005],path[5005],ans;
vector<int> edges[5005];
queue<int> q;
int main(){
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		in[y]++;
		out[x]++;
	}
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			path[i]=1;
			q.push(i);
		}
	}
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<edges[now].size();i++){
			path[edges[now][i]]=(path[edges[now][i]]+path[now])%mod;
			in[edges[now][i]]--;
			if(in[edges[now][i]]==0){
				if(out[edges[now][i]]==0) ans=(ans+path[edges[now][i]])%mod;
				else q.push(edges[now][i]);
			}
		}
	}
	cout<<ans;
	return 0;
}
