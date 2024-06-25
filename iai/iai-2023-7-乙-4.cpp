#include<bits/stdc++.h>
using namespace std;
int n,a[505];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int most;
	if(n%2==0) most=a[n/2];
	else most=a[n/2+1];
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]==most||(i!=n&&a[i]==a[i+1])) continue;
		else ans++;
	}
	cout<<ans;
	return 0;
}
