#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,b,op;
ll nowa=0,nowb=1;
ll gcd(ll x,ll y){
	if(y==0) return x;
	else return gcd(y,x%y);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>op;
		if(op==1) nowa=nowa*b+a*nowb;
		else nowa=nowa*b-a*nowb;
		nowb*=b;
		int GCD=gcd(nowa,nowb); 
		nowa/=GCD;
		nowb/=GCD;
	}
	if(nowa%nowb==0) cout<<nowa/nowb;
	else if(nowa>0&&nowb<0) cout<<"-"<<abs(nowa)<<"/"<<abs(nowb);
	else cout<<nowa<<"/"<<nowb;
	return 0;
}
