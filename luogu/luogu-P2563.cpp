#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll f[205];
bool is_prime(int x){
	if(x<2) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	while(cin>>n){
		int prime[55],num=0;
        for(int i=2;i<=n;i++){
        	if(is_prime(i)) prime[++num]=i;
		}
        memset(f,0,sizeof(f));
        f[0]=1;
        for(int i=1;i<=num;i++){
            for(int j=prime[i];j<=200;j++){
            	f[j]+=f[j-prime[i]];
			}
        }
        cout<<f[n]<<endl;
	}
	return 0;
}
