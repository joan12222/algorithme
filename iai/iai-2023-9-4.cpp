#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[500005],b[500005],prea[500005],preb[500005];
ll ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++) prea[i]=prea[i-1]+
	for(int i=1;i<=n;i++) preb[i]=preb[i-1]+b[i];
	int j=0;
	for(int i=1;i<=n;i++){
		j=0;
		while(j+1<=n&&a[j+1]<=b[i]) j++;
		ans+=preb[j]+prea[n]-prea[j];
	}
	cout<<ans;
	return 0;
}
