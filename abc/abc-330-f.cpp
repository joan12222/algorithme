#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k,pre[300005];
string s;
bool validate(ll length){
	for(ll begin=0;begin<n;begin++){
		//if(n*m-begin<length) break;
		ll sum=0,len=0,copy=1;
		if(length>=n-begin){
			if(begin==0) sum+=pre[n-1];
			else sum+=pre[n-1]-pre[begin-1];
			len+=n-begin;
		}else{
			len=n-begin;
			if(begin==0) sum+=pre[length-1];
			else sum+=pre[length+begin-1]-pre[begin-1];
		}
		if(len<length){
			ll num=(length-len)/n;
			sum+=pre[n-1]*num;
			len+=num*n;
			copy+=num;
		}
		if(len<length){
			sum+=pre[length-len-1];
			copy++;
		}
		if(sum<=k&&copy<=m) return true;
	}
	return false;
}
int main(){
	cin>>n>>m>>k>>s;
	pre[0]=(s[0]=='x');
	for(int i=1;i<n;i++){
		pre[i]=pre[i-1];
		if(s[i]=='x') pre[i]++;
	}
	//cout<<pre[n-1]<<endl;
	ll lower=0,upper=n*m+1;
	while(upper-lower>1){
		ll mid=(upper+lower)/2;
		if(validate(mid)) lower=mid;
		else upper=mid;
	}
	cout<<lower;
	return 0;
}
