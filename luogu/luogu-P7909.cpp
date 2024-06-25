#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,l,r;
int main(){
	cin>>n>>l>>r;
	if(l/n==r/n) cout<<r%n;
	else cout<<n-1;
	return 0;
} 
