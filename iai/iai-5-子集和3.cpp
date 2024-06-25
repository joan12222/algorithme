#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
//int f[100005],buf[100005];
int n,k,a[1005];
int dp[1005][100005];
int main(){
    cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	/*
	f[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			buf[(j+a[i])%k]=f[j];
		}
		for(int j=0;j<k;j++){
			f[j]=(f[j]+buf[j])%mod;
		}
	}
	cout<<f[0]-1;
	*/
	dp[0][0]=1;
  	for(int i=1;i<=n;i++){
    	for(int j=0;j<k;j++){
    		dp[i][j]=(dp[i-1][j]+dp[i-1][(j-a[i]%k+k)%k])%mod;
        }
    }
    cout<<(dp[n][0]-1)%mod;
    return 0;
}
