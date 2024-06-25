#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x,y,p,q,a[100005],num[100005],ans[1005];
void solve(){
	for(int i=1;i<=p;i++){
		for(int j=1;j<=n;j++){
			a[j]=(a[j]*x+y)%p;
			if(a[j]==num[j]) ans[i]++;
		}
	}
	ans[0]=ans[p];
}
int main(){
	cin>>n>>x>>y>>p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num[i]=a[i];
	}
	solve();
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<ans[x%p]<<endl;
	}
	return 0;
} 
