#include<bits/stdc++.h>
using namespace std;
int n;
char tree[501][501];
void dfs(int k,int m){
	cout<<k<<" ";
	for(int i=1;i<=n;i++){
		if(tree[k][i]=='1'&&i!=m){
			dfs(i,k);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>tree[i][j];
		}
	}
	dfs(1,0);
}