#include<bits/stdc++.h>
using namespace std;
#define ll long long
int k;
ll n,e,d;
int main(){
	cin>>k;
	while(k--){
		cin>>n>>e>>d;
		ll add=n-e*d+2;
		ll minus=sqrt(add*add-n*4);
		ll p=(add+minus)/2;
		ll q=add-p;
		if(p*q==n&&e*d==(p-1)*(q-1)+1&&p>0&&q>0) cout<<min(p,q)<<" "<<max(p,q)<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
