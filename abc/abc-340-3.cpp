#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
map<ll,ll> mp;
ll calc(ll x){
	if(x<2) return 0;
	if(mp.count(x)) return mp[x];
	return mp[x]=calc(x/2)+calc((x+1)/2)+x; 
}
int main(){
	cin>>n;
	cout<<calc(n);
	return 0;
}
/*
log(340)=8
8*340=2720+84*2
9*340=3060-172=2*86
170 170
85 85 85 85
43
22 21
11 11 11 10
6 5 6 5 6 5 5 5
3 3 3 2 3 3 3 2 3 3 3 2 3 2 3 2
42
21 21
11 10 11 10
6 5 5 5 6 5 5 5
3 3 3 2 3 2 3 2 3 3 3 2 3 2 3 2

340
170
85
43
22
11
6
3

9
5 4
3 2 2 2
2 1
*/
