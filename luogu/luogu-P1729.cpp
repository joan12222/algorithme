#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
long long n;
int main(){
	cin>>n;
	if(n==1){
		cout<<3;
		return 0;
	}
	long long n2=n;
	long long power=1;
	long long base=2;
	while(n>0){
		if(n%2==0){
			n/=2;
			base=(base*base)%mod;
		}else{
			n--;
			power=(power*base)%mod;
		}
	}
	//cout<<n2%2==0?(power+2)%mod:(power-2)%mod;
	if(n2%2==0){
		cout<<power+2;
	}else{
		cout<<power-2;
	}
	return 0;
}
