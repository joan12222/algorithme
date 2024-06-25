#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n;
ll f[2005]={0};
ll triangle[2010][2010];
void build(int n){
	triangle[0][0]=1;
	triangle[1][0]=triangle[1][1]=1;
	for(int i=2;i<=n;i++){
		triangle[i][0]=1;
		for(int j=1;j<=i;j++){
			triangle[i][j]=(triangle[i-1][j-1]%mod+triangle[i-1][j]%mod)%mod;
		}
	}
}
int main(){
	cin>>n;
	f[0]=1;
	build(n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			f[i]=f[i]+f[i-j]*triangle[i][j];
			f[i]%=mod;
		}
	}
	cout<<f[n];
	return 0;
}
