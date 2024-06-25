#include<bits/stdc++.h>
using namespace std;
struct Node{
	int pos,next,val;
	bool operator <(const Node &x) const{return val<x.val;};
}edges[8005];
int n,m,f[305],ans,cnt;
int find(int x){
	if(x==f[x]) return x;
	return find(f[x]);
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y,z;i<=m;i++) cin>>edges[i].pos>>edges[i].next>>edges[i].val;
	sort(edges+1,edges+m+1);
	for(int i=1;i<=n;i++) f[i]=i;
	for(int i=1;i<=m;i++){
		if(find(f[edges[i].pos])!=find(f[edges[i].next])){
			if(find(edges[i].pos)!=find(edges[i].next)) f[find(edges[i].pos)]=find(edges[i].next);
			ans=edges[i].val;
			cnt++;
		}
		if(cnt==n-1) break;
	}
	cout<<n-1<<" "<<ans;
	return 0;
}
