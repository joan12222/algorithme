#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a,b;
ll x,y;
void exgcd(ll a,ll b){
	if(b==0){
		x=1;
		y=0;
		return;
	}
	exgcd(b,a%b);
	int t=x;
	x=y;
	y=t-a/b*y;
}
int main(){
	cin>>a>>b;
	exgcd(a,b);
	cout<<(x%b+b)%b;
	return 0;
}
