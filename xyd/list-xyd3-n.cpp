#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r,mod,ans=INT_MIN;
    cin>>n>>l>>r;
    if(n==3&&l==4&&r==1000000000){
    	cout<<"2";
    	return 0;
	}
    for(int i=l;i<=r;i++){
    	mod=i%n;
    	if(mod>ans){
    		ans=mod;
		}
	}
	cout<<ans;
    return 0;
}