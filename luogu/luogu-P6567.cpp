#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,mon[205],num[205],wat[100005],dp[500005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>mon[i]>>num[i];
	for(int i=1;i<=m;i++) cin>>wat[i];
	for(int i=1;i<=m;i++){
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int j=0;j<=wat[i];j++){
			if(dp[j]==1)
		}
	}
	return 0;
}
