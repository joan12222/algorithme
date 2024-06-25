#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,c,a[200005],ans;
int main(){
	cin>>n>>c;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	ll p1=1,p2=1;
	for(int i=1;i<=n;i++){
		while(p1<=n&&a[p1]-a[i]<=c) p1++;
		while(p2<=n&&a[p2]-a[i]<c) p2++;
		if(a[p2]-a[i]==c&&a[p1-1]-a[i]==c&&p1-1>=1) ans+=p1-p2;
	}
	cout<<ans;
	return 0;
}
