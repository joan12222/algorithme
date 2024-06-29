#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,du[10005],a[10005],k,f[10005];
vector<int> edges[10005];
queue<int> q,q1;
ll ans;
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		edges[y].push_back(x);
		du[x]++;
	}
	for(int i=1;i<=n;i++){
		if(du[i]==0) q.push(i);
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		q1.push(u);
		for(int i=0;i<edges[u].size();i++){
			int v=edges[u][i];
			du[v]--;
			if(du[v]==0) q.push(v);
		}
	}
	while(!q1.empty()){
		a[++k]=q1.front();
		q1.pop();
	}
	//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	//cout<<endl;
	f[a[1]]=100;
	for(int i=2;i<=n;i++){
		bool flag=true;
		for(int j=0;j<edges[a[i-1]].size();j++){
			if(edges[a[i-1]][j]==a[i]){
				flag=false;
				break;
			}
		}
		if(flag) f[a[i]]=f[a[i-1]];
		else f[a[i]]=f[a[i-1]]+1;
	}
	for(int i=1;i<=n;i++) ans+=f[i];
	cout<<ans;
	return 0;
}
