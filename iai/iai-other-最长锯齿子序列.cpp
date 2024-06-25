#include<bits/stdc++.h>
using namespace std;
int n,a[10005],dp[10005][3],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	dp[1][1]=1;
	if(a[2]-a[1]>0) dp[1][2]=0;
	else dp[1][2]=1;
	for(int i=2;i<=n;i++){
		int flag=0;
		for(int j=1;j<i;j++){
			if(dp[j][2]==0&&a[i]-a[j]>0&&dp[j][1]+1>dp[i][1]){
				dp[i][1]=dp[j][1]+1;
				flag=1;
			}
			if(dp[j][2]==1&&a[i]-a[j]<0&&dp[j][1]+1>dp[i][1]){
				dp[i][1]=dp[j][1]+1;
				flag=0;
			}
		}
		dp[i][2]=flag;
	}
	for(int i=1;i<=n;i++) ans=max(ans,dp[i][1]);
	cout<<ans;
	return 0;
}
