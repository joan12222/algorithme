#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
bool is_prime(int x){
	if(x==1) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
		if(n%i==0){ 
		    cout<<n/i;
		    break;
    	}
    }
    return 0;
}
