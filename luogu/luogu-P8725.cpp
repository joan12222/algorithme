#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int d,t,m,f[3005][3005];
int main(){
	cin>>d>>t>>m;
	f[0][m]=1;
	for(int i=1;i<=t;i++){
		for(int j=0;j<=m;j++){
			int num=d+(m-j)-(i-(m-j));
			if(num>0) f[i][j]=(f[i-1][j+1]+f[i-1][j])%mod;
		}
	}
	cout<<f[t][0];
	return 0;
} 
