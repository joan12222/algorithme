#include<bits/stdc++.h>
using namespace std;
int n,a[105];
bitset<100005> bucket;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bucket|=bucket<<a[i];
	}
	bucket.set(0);
	for(int i=1;i<=n;i++) bucket|=bucket>>a[i];
	cout<<bucket.count()-1;
	return 0;
}
