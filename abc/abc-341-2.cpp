#include<bits/stdc++.h>
using namespace std;
int n,a[200005],t[200005],s[200005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++) cin>>s[i]>>t[i];
	for(int i=1;i<n;i++) a[i+1]+=a[i]/s[i]*t[i];
	cout<<a[n];
	return 0;
}
