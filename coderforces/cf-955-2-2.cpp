#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t;
ll x,y,k;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--){
		cin>>x>>y>>k;
		if(x==1){
			cout<<1+k%(y-1)<<endl;
			continue;
		}
		while(k!=0){
			ll rem=x%y;
			if(rem>0) rem=y-rem;
			if(rem==0){
				k--;
				x++;
				rem=x%y;
				if(rem>0) rem=y-rem;
			}
			if(rem<=k){
				k-=rem;
				x+=rem;
				while(x%y==0) x/=y;
			}else x+=k,k=0;
		}
		cout<<x<<endl;
	}
	return 0;
}
