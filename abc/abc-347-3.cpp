#include<bits/stdc++.h>
using namespace std;
long long n,a,b,d[200005];
int main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>d[i];
		d[i]%=(a+b);
	}
	sort(d+1,d+n+1);
	d[n+1]=d[1]+a+b;
	for(int i=1;i<=n;i++){
		if(d[i+1]-d[i]-1>=b){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
