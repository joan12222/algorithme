#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	swap(a[0],a[n-1]);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}