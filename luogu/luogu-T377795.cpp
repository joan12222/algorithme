#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,ans;
int main(){
	cin>>n>>m;
	if(n<=m){
		cout<<n;
		return 0;
	}
	n=(n-m)*2;
	ans=sqrt(n);
	while(ans*(ans+1)>=n) ans--;
	ans++;
	cout<<m+ans;
	return 0;
}
