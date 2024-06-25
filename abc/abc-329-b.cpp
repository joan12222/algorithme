#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		if(i!=n&&a[i]!=a[i+1]){
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}
