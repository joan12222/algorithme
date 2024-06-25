#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,ans=1;
int main(){
	//freopen("increasing.in","r",stdin);
	//freopen("increasing.out","w",stdout);
	cin>>n>>m;
	if(n==m){
		cout<<"1";
		return 0;
	}
	n=min(n,m-n);
	for(ll i=1,num=m;i<=n;i++,num--) ans*=num;
	for(ll i=2;i<=n;i++) ans/=i;
	cout<<ans;
	return 0;
}
