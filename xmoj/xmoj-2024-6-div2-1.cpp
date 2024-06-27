#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main(){
	freopen("replace.in","r",stdin);
	freopen("replace.out","w",stdout);
	cin>>n;
	for(ll i=3;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<i;
			return 0;
		}
	}
	if(n%2==0) cout<<n/2;
	else cout<<n;
	return 0;
}
