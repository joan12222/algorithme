#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000005],t;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>t;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]>t/2) break;
		for(int j=i+1;j<=n;j++){
			if(a[i]+a[j]==t){
				cout<<"Yes";
				return 0;
			} 
		}
	}
	cout<<"No";
	return 0;
}
