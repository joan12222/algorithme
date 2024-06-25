#include<bits/stdc++.h>
using namespace std;
int n,a[2005];
int mem[2005];
int dp(int n){
	if(n==0) return 0;
	if(mem[n]) return mem[n];
	int best=0;
	for(int cut=1;cut<=n;cut++){
		int t=a[cut]+dp(n-cut);
		best=max(best,t);
	}
	return mem[n]=best;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<dp(n);
	return 0;
}
