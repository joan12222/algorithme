#include<bits/stdc++.h>
using namespace std;
int n,d,a[100005],ans=0;
int main(){
	cin>>n>>d;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(a[i]-a[j])<=d) ans++;
		}
	}
	cout<<ans;
	return 0;
}
