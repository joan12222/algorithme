#include<bits/stdc++.h>
using namespace std;
#define ll long long
int type,n,m,mod;
ll ans=1;
int main(){
	cin>>type>>n>>m>>mod;
	n=n-m+1;
	for(int i=n-m+1;i<=n;i++) ans=ans*i%mod;
	cout<<ans; 
	return 0; 
}
