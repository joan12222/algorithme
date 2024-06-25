#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n;
char s[7005];
bool mem[7005][7005];
ll cache[7005][7005];
ll dp(int nest,int idx){
	if(idx==n) return nest==0;
	if(mem[nest][idx]) return cache[nest][idx];
	mem[nest][idx]=true;
	if(s[idx]=='f') return cache[nest][idx]=dp(nest+1,idx+1);
	ll sum=0;
	for(int i=0;i<=nest;i++) sum=(sum+dp(i,idx+1))%mod;
	return cache[nest][idx]=sum;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<dp(0,0);
	return 0;
}
