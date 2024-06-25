#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[500005];
ll ans; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n+1;i++){
		if(a[i]>a[i-1]) ans+=a[i]-a[i-1];
	}
	cout<<ans;
	return 0;
}
