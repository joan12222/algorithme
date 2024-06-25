#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int x;
ll ans=0;
ll count(string s){
	ll num=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==x) num++;
	}
	return num;
}
int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++){
    	int op=i;
    	while(op!=0){
    		if(op%10==x) ans++;
    		op/=10;
		}
	}
	cout<<ans;
    return 0;
}
