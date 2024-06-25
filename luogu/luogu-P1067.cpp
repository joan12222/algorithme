#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int main(){
	cin>>n;
	for(int i=1;i<=n+1;i++) cin>>a[i];
	if(n==0){
		cout<<a[1];
		return 0;
	}
	if(a[1]==1) cout<<"x^"<<n;
	else if(a[1]=-1) cout<<"-x^"<<n;
	else cout<<a[1]<<"x^"<<n;
	for(int i=2;i<=n;i++){
		if(a[i]==1){
			cout<<"+x^"<<n-i+1;
			continue;
		}
		if(a[i]==-1){
			cout<<"-x^"<<n-i+1;
			continue;
		}
		if(a[i]>0) cout<<"+"<<a[i]<<"x^"<<n-i+1;
		else if(a[i]<0) cout<<a[i]<<"x^"<<n-i+1;
	}
	if(a[n+1]>0) cout<<"+"<<a[n+1];
	else if(a[n+1]<0) cout<<a[n+1];
	return 0;
}
