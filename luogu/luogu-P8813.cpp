#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b;
int main(){
	cin>>a>>b;
	ll ans=1,op=1>>31-1;
	for(ll i=1;i<=b;i++){
		if(ans>op){
			cout<<"-1";
			return 0;
		}
		ans*=a;
	}
	cout<<ans;
	return 0;
}
