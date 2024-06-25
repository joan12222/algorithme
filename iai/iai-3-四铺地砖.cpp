#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
int n;
long long f[100005];
int main(){
	cin>>n;
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=f[i-1]+2*f[i-2];
		f[i]%=mod;
	}
	cout<<f[n];
	return 0;
}