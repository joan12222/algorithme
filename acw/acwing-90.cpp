#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,p,ans;
int main(){
	cin>>a>>b>>p;
	while(b){
		if(b%2) ans=(ans+a)%p;
		a=a*2%p;
		b/=2;
	}
	cout<<ans;
	return 0;
} 
