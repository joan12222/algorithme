#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
long long n;
long long color3(long long base,long long index){
	if(index==0){
		if(base==0) return 0;
		else return 1;
	}
	if(index%2==0) return color3(base*base%mod,index/2);
	else return color3(base,index-1)*base%mod;
}
int main(){
	cin>>n;
	if(n==1){
		cout<<"3";
		return 0;
	}
	long long ans=color3(2,n);
	if(n%2==0) cout<<(ans+2)%mod;
	else cout<<(ans-2+mod)%mod;
	return 0;
}
