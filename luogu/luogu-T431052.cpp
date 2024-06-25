#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
int t;
ll n,ans,a;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		a=25;
		ans=n%mod*((n-1)%mod)%mod;
		n-=2;
		while(n){
			if(n%2==1) ans=ans*a%mod;
			a=a*a%mod;
			n/=2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
