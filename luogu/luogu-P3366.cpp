#include<bits/stdc++.h>
using namespace std;
int n,m,f[5005],vis[5005],ans;
struct Node{
	int x,y,z;
}edges[200005];
bool cmp(Node x,Node y){
	return x.z<y.z;
}
int find(int x){
	if(x==f[x]) return x;
	return f[x];
}
void kruskal(){
	int k=0;
	sort(edges+1,edges+m+1,cmp);
	for(int i=1;i<=m;i++){
		if(find(edges[i].x)==find(edges[i].y)) continue;
		ans+=edges[i].z;
		f[find(edges[i].y)]=find(edges[i].x);
		++k;
		if(k==n-1) break;
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>edges[i].x>>edges[i].y>>edges[i].z;
		vis[edges[i].x]=1;
		vis[edges[i].y]=1;
	}
	/*
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			cout<<"orz";
			return 0;
		}
	}
	*/
	for(int i=1;i<=n;i++) f[i]=i;
	kruskal();
	cout<<ans;
	return 0;
}
