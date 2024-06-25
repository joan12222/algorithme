#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];
vector<int> edges[100005];
void dfs(int k,int num){
	if(a[k]!=0) return;
	a[k]=num;
	for(int i=0;i<edges[k].size();i++) dfs(edges[k][i],num);
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[y].push_back(x);
	}
	for(int i=n;i>=1;i--) dfs(i,i);
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;

}
