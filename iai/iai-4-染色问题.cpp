#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
long long n,m;
long long power(long long base,long long index){
	if(index==0){
		if(base==0) return 0;
		else return 1;
	}
	if(index%2==0) return power(base*base%mod,index/2);
	else return power(base,index-1)*base%mod;
}
int main(){
	cin>>n>>m;
	cout<<m*power(m-1,n-1)%mod;
}
