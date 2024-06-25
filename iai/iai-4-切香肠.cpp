#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main(){
	cin>>n>>k;
	long long cnt=0;
	while(n>0&&k>0){
		if(n>=k){
			n%=k;
		}else{
			k-=n;
			ans+=n;
		}
	}
	cout<<cnt;
	return 0;
}
