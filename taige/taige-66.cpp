#include<bits/stdc++.h>
using namespace std;
int n,m,a[10005],ans[10005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		next_permutation(a+1,a+n+1);
	}
	for(int i=1;i<=n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n];
	return 0;
}