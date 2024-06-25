#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n,m;
int dp[205][105][105];
int main(){
	cin>>n>>m;
	dp[0][0][2]=1;
	for(int i=0;i<n+m;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<=m;k++){
				if(dp[i][j][k]!=0){
					if(k>0) dp[i+1][j+1][k-1]=(dp[i+1][j+1][k-1]+dp[i][j][k])%mod;
					if(k<=50) dp[i+1][j][k*2]=(dp[i+1][j][k*2]+dp[i][j][k])%mod;
				}
			}
		}
	}
	cout<<dp[n+m][m][0]%mod;
	return 0;
} 
