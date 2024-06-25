#include<bits/stdc++.h>
using namespace std;
long long s,t,minn=2*(1e18)+1;
void dfs(long long s,long long cnt){
	if(cnt>=minn) return;
	if(s==t){
		minn=min(minn,cnt);
		return;
	}
	if(s>t) return;
	dfs(s+1,cnt+1);
	dfs(s*2,cnt+1);
}
int main(){
	cin>>s>>t;
	dfs(s,0);
	cout<<minn;
	return 0;
}
