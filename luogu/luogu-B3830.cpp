#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x,c[100005],ans=1e18;
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		if(c[i]<=x){
			cout<<"-1";
			return 0;
		}
		if(i>=2){
			if((c[i]-c[i-1])%x!=0){
				cout<<"-1";
				return 0;
			}
		}
		if(c[i]<ans) ans=c[i];
	}
	cout<<ans-x;
	return 0;
} 
