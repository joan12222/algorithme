#include<bits/stdc++.h>
using namespace std;
#define ll long long
string N;
ll l,r;
bool mem[32][2][2][65];
ll cache[32][2][2][65];
ll solve(int sz,bool limited,bool zero_shield,int diff){
	if(sz==N.size()) return diff>=0;
	else{
		if(mem[sz][limited][zero_shield][diff+32]) return cache[sz][limited][zero_shield][diff+32];
		char end=(limited)?N[sz]:'1';
		ll sum=0;
		sum+=solve(sz+1,limited&(end=='0'),zero_shield,diff+(!zero_shield));
		if(end=='1') sum+=solve(sz+1,limited,false,diff-1);
		mem[sz][limited][zero_shield][diff+32]=true;
		return cache[sz][limited][zero_shield][diff+32]=sum;
	}
}
int main(){
	cin>>l>>r;
	while(r>0){
		int bit=r%2;
		r/=2;
		N=char(bit+'0')+N;
	}
	ll sum=solve(0,1,1,0);
	memset(mem,0,sizeof(mem));
	l--;
	N="";
	while(l>0){
		int bit=l%2;
		l/=2;
		N=char(bit+'0')+N;
	}
	cout<<sum-solve(0,1,1,0);
	return 0;
}
