#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	cout<<"0 ";
	for(int i=2;i<=n;i++){
		ans+=a[i-1];
		cout<<ans/m<<" ";
	}
	return 0;
}