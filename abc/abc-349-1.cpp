#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int main(){
	cin>>n;
	for(int i=1;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++) a[i+1]+=a[i];
	cout<<a[n];
	return 0;
}
