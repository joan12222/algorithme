#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,ans,sum;
ll calc(ll x){
	return x*(x-1)/2*(x-2)/3;
}
int gcd(int x,int y){
	if(y==0) return x;
	return gcd(y,x%y);
}
int main(){
	cin>>n>>m;
	ans=calc((n+1)*(m+1));
	ans-=(calc(n+1)*(m+1)+calc(m+1)*(n+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) sum+=(n-i+1)*(m-j+1)*(gcd(i,j)-1);
	}
	ans-=sum*2;
	cout<<ans;
	return 0;
}
