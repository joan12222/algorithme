#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int n,a[505],cache[505][200005];
bool mem[505][200005]={false};
int max3(int a,int b,int c){
	if(a>=b&&a>=c) return a;
	if(b>=c) return b;
	return c;
}
int solve(int n,int balance){
	if(n==0){
		if(balance==0) return 0;
		return -INF;
	}
	if(mem[n][balance]) return cache[n][balance];
	mem[n][balance]=true;
	return cache[n][balance]=max3(a[n]+solve(n-1,balance-a[n]),a[n]+solve(n-1,balance+a[n]),solve(n-1,balance));
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<solve(n,0)/2;
	return 0;
}
