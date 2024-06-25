#include<bits/stdc++.h>
using namespace std;
long long f(int n){
	if(n==1){
		return 1;
	}else{
		return f(n-1)*n%998244353;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}