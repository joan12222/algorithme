#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100005],l[100005],r[100005];
ll ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	l[1]=a[1];
	for(int i=1;i<n;i++) l[i+1]=min(l[i],a[i+1]);
	r[n]=a[n];
	for(int i=n;i>1;i--) r[i-1]=min(r[i],a[i-1]);
	for(int i=1;i<=n;i++){
		if(l[i]<a[i]&&r[i]<a[i]) ans+=max(l[i],r[i]);
		else ans+=a[i];
	}
	cout<<ans;
	return 0;
}
