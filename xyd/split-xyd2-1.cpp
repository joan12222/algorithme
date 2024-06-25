#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll x,ll y,ll z){
	if(y==1){
		return x;
	}
	if(y%2==1){
		return f(x,y/2,z)*f(x,y/2,z)%z*x%z;
	}else{
		return f(x,y/2,z)*f(x,y/2,z)%z;
	}
}
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	cout<<f(x,y,z);
	return 0;
}