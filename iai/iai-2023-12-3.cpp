#include<bits/stdc++.h>
using namespace std;
int n,d,a[500005],now;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	cin>>n>>d;
	for(int i=1;i<=n;i++) cin>>a[i];
	now=a[1];
	for(int i=2;i<=n;i++) now=gcd(now,a[i]);
	d=abs(d);
	if(d%now==0) cout<<"Yes";
	else cout<<"No";
	return 0;
}
