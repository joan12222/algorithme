#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100005];
ll ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=2;i<=n;i++){
		if(a[i-1]<a[i]) ans+=a[i]-a[i-1];
	}
	cout<<ans+a[1];
	return 0;
}