#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,a[100005];
ll ans,maxx;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		ans=maxx=0;
		for(int i=2;i<=n;i++){
			if(a[i]>=a[i-1]) continue;
			ans+=a[i-1]-a[i];
			maxx=max(maxx,a[i-1]-a[i]);
			a[i]=a[i-1];
		}
		cout<<ans+maxx<<endl;
	}
	return 0;
}
