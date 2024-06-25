#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x,ans,a[100005]; 
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(ll i=1,j=1;i<=n;i++){
		while(j<=n&&a[j]-a[i]<=x) j++;
		if(j-1-i>=2) ans+=(ll)(j-1-i)*(j-i-2)/2;
	}
	cout<<ans;
	return 0;
}
