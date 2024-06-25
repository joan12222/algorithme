#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,mod,ans=1;
int main(){
	cin>>a>>b>>mod;
	if(b==0){
		cout<<1%mod;
		return 0;
	}
	while(b){
		if(b%2==1) ans=ans*a%mod;
		a=a*a%mod;
		b/=2;
	}
	cout<<ans;
	return 0;
}
