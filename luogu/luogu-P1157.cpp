#include<bits/stdc++.h>
using namespace std;
int n,r,ans[25];
void dfs(int k){
	if(k==r+1){
		cout<<"aaa";
		for(int i=1;i<=r;i++) cout<<setw(3)<<ans[i];
		cout<<endl;
		return;
	}
	for(int i=ans[k-1]+1;i<=n;i++){
		ans[k]=i;
		dfs(k+1);
	}
}
int main(){
	cin>>n>>r;
	ans[0]=0;
	dfs(1);
	return 0;
}
