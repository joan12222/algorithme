#include<bits/stdc++.h>
using namespace std;
#define ll long long
int l;
bool is_prime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	cin>>l;
	ll now=0,cnt=0;
	for(int i=2;i<=100000;i++){
		if(!is_prime(i)) continue;
		if(now+i>l){
			cout<<cnt;
			return 0;
		}
		now+=i;
		cout<<i<<endl;
		cnt++;
	}
	return 0;
}
