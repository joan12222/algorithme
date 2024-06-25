#include<bits/stdc++.h>
using namespace std;
int a;
long long k;
long long f[1000005];
int main(){
	cin>>a>>k;
	int i=3;
	f[1]=1;
	f[2]=a;
	while(true){
		f[i]=f[i-1]+f[i-2];
		if(f[i]>k){
			cout<<i;
			return 0;
		}
		i++;
	}
	return 0;
}
