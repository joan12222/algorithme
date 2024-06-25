#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
struct Giant{
	ll sh,hd,min;
}a[200005];
ll ans;
bool cmp(Giant x,Giant y){
	return x.min<y.min;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].sh>>a[i].hd,a[i].min=a[i].hd-a[i].sh;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<n;i++) ans+=a[i].sh;
	cout<<ans+a[n].hd;
	return 0;
}
