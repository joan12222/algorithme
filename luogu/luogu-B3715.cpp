#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t;
ll n;
bool is_prime(ll x){
	if(x==1) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		if(is_prime(n)||n==1){
			cout<<n<<endl;
			continue;
		}
		for(int i=2;i<=n;i++){
			if(!is_prime(i)) continue;
			while(n%i==0){
				cout<<i<<" ";
				n/=i;
			}
			if(n==1) break;
			if(is_prime(n)){
				cout<<n;
				break;
			}
		}
		cout<<endl;
	}
	return 0; 
}
