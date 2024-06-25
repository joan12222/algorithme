#include<bits/stdc++.h>
using namespace std;
int a,k,ans=0;
int main(){
	cin>>a>>k;
	for(int i=1;i<=9;i++){
		if(i==a) ans++;
		if(ans==k){
			cout<<i;
			return 0;
		}
	}
	for(int i=10;i<=99;i++){
		if(i/10==a) ans++;
		if(ans==k){
			cout<<i;
			return 0;
		}
		if(i%10==a) ans++;
		if(ans==k){
			cout<<i;
			return 0;
		}
	}
	for(int i=100;i<=999;i++){
		if(i%10==a) ans++;
		if(ans==k){
			cout<<i;
			return 0;
		}
		if(i/10%10==a) ans++;
		if(ans==k){
			cout<<i;
			return 0;
		}
		if(i/100==a) ans++;
		if(ans==k){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
