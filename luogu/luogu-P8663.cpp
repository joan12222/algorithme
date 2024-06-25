#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,dp[1005][3],ans,num,sum;
int main(){
	cin>>n>>k;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(x>dp[x%k][0]){
			dp[x%k][2]=dp[x%k][1];
			dp[x%k][1]=dp[x%k][0];
			dp[x%k][0]=x;
		}else if(x>dp[x%k][1]){
			dp[x%k][2]=dp[x%k][1];
			dp[x%k][1]=x;
		}else if(x>dp[x%k][2]) dp[x%k][2]=x;
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			sum=0;
			num=(0-i-j+k)%k;
			num=(num%k+k)%k;
			sum+=dp[i][0];
			int ind1=1,ind2=0,ind3=0;
			if(i==j) ind2=ind1;
			if(i==num) ind3=ind1;
			sum+=dp[j][ind2];
			ind2++;
			if(j==num) ind3=ind2;
			sum+=dp[num][ind3];
			ans=max(sum,ans);
		}
	}
	cout<<ans;
	return 0;
}
