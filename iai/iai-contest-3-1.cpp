#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,m,dp[2][5005][2];
int main(){
	freopen("locked.in","r",stdin);
	freopen("locked.out","w",stdout);
	cin>>n>>m;
	dp[0][0][0]=1;
	dp[0][1][1]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<=m;j++){
			dp[i%2^1][j][0]=(dp[i%2][j][0]+dp[i%2][j][1])%mod;
			dp[i%2^1][j][1]=dp[i%2][j][0]%mod;
			if(j>=1) dp[i%2^1][j][1]=(dp[i%2^1][j][1]+dp[i%2][j-1][1])%mod;
		}
	}
	cout<<(dp[n%2^1][m][0]+dp[n%2^1][m][1])%mod;
	return 0;
}
