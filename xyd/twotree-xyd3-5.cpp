#include<bits/stdc++.h>
using namespace std;
int n,ans[1001]={0};
char tree[1001][1001];
void dfs(int k,int m){
	for(int i=1;i<=n;i++){
		if(tree[k][i]=='1'&&i!=m){
			ans[k]++;
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
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(tree[i][j]=='1'&&j>i){
				ans[i]++;
			}
		}
	}
	*/
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
}