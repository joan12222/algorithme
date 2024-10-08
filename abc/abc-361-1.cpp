#include<bits/stdc++.h>
using namespace std;
int n,k,x,a[105];
int main(){
	cin>>n>>k>>x;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
		if(i==k) cout<<x<<" ";
	}
	return 0;
}
