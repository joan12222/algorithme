#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100005],t[100005]; 
ll f[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++) cin>>t[i];
	f[n]=a[n];
	for(int i=n-1;i>=1;i--) f[i]=max(f[i+1],f[t[i]])+a[i];
	cout<<f[1];
	return 0;
}
