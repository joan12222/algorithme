#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,ans[25];
void dfs(int k){
	if(k==m+1){
		for(int i=1;i<=m;i++) cout<<setw(3)<<ans[i];
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(i>ans[k-1]){
			ans[k]=i;
			dfs(k+1);
		}
	}
}
int main(){
	cin>>n>>m;
	dfs(1);
	return 0;
}
