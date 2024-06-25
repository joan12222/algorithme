#include<bits/stdc++.h>
using namespace std;
int n,s,m,l,ans=2e9;
void dfs(int remain,int num){
	if(remain<=0) ans=min(ans,num);
	else{
		dfs(remain-6,num+s);
		dfs(remain-8,num+m);
		dfs(remain-12,num+l);
	}
}
int main(){
	cin>>n>>s>>m>>l;
	dfs(n,0);
	cout<<ans;
	return 0;
}
