#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull n,m,k,q;
bool check(ull x){
	return x/n+x/m-x/q*2>=k;
}
ull gcd(ull a,ull b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	cin>>n>>m>>k;
	q=n*m/gcd(n,m);
	ull l=1,r=2e18;
	while(l<r){
		ull mid=(l+r)/2;
		if(check(mid)) r=mid;
		else l=mid+1;
	}
	cout<<r;
	return 0;
}
