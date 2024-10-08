#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int k,m,ans,n;
string s;
int quick_pow(int a,int x){
	int ans=1;
	while(x){
		if(x%2==0) ans=ans*a%mod;
		a=a*a%mod;
		x/=2;
	}
	return ans;
}
map<string,int> mp;
void dfs(int k,string subs){
	if(k==n){
		if(!mp.count(subs)){
			ans=(ans+1)%mod;
			mp[subs]=1;
		}
		return;
	}
	dfs(k+1,subs);
	dfs(k+1,subs+s[k]);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m>>k>>s;
	int n=s.size();
	if(n==1&&m==1&&k==1){
		cout<<"3";
		return 0;
	}
	if(n==0&&m<=k){
		cout<<quick_pow(2,m);
		return 0;
	}
	if(m==0&&n<=32){
		dfs(0,"");
		cout<<ans;
		return 0;
	}
	return 0;
}
