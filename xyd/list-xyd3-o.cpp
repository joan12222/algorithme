#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,mod,ans=INT_MAX;
    cin>>n>>a>>b;
    for(int i=1;i<=n/a;i++){
    	mod=(n-i*a)%b;
    	if(mod<ans){
    		ans=mod;
		}
	}
	for(int i=1;i<=n/b;i++){
    	mod=(n-i*b)%a;
    	if(mod<ans){
    		ans=mod;
		}
	}
	cout<<ans;
    return 0;
}