#include<bits/stdc++.h>
using namespace std;
int main(){
	long c,k,m,n,t;
	cin>>n;
	t=long(sqrt(2*n));
	c=0;
	for(int i=2;i<=t;i++) {
		if((2*n)%i>0||(2*n/i+1-i)%2>0){
			continue;
		}
		m=(2*n/i+1-i)/2;
		c++;
	}
	cout<<c;
	return 0;
}
