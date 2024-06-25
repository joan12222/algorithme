#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
int n;
long long hh[1000005];
long long ht[1000005];
long long th[1000005];
long long tt[1000005];
int main(){
	cin>>n;
	hh[0]=ht[0]=th[0]=tt[0]=1;
	for(int i=1;i<=n;i++){
		hh[i]=ht[i-1];
		tt[i]=th[i-1];
		ht[i]=(th[i-1]+tt[i-1])%mod;
		th[i]=(hh[i-1]+ht[i-1])%mod;
	}
	if(n==1){
		cout<<"2";
		return 0;
	}else{
		cout<<(hh[n-2]+th[n-2]+tt[n-2]+ht[n-2])%mod;	
	}
	return 0;
}