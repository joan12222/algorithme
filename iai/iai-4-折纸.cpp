#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main(){
	cin>>n>>m;
	long long cnt=0;
	while(m>0&&n>0){
		if(n>m){
			cnt+=n/m;
			n%=m;
		}else{
			cnt+=m/n;
			m%=n;
		}
	}
	cout<<cnt;
	return 0;
}
