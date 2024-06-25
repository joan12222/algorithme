#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
const ll inv5=(mod*3+1)/5;
ll N;
int A,B,C;
ll mem[80][60][40];
ll dp(int a,int b,int c){
	if(a>A||b>B||c>C) return 0;
	if(a==A&&b==B&&c==C) return 1;
	if(mem[a][b][c]) return mem[a][b][c];
	ll progress=(dp(a+1,b,c)+dp(a,b+1,c)+dp(a,b,c+1)+dp(a+2,b,c)+dp(a+1,b+1,c))%mod;
	return mem[a][b][c]=progress*inv5%mod;
}
int main(){
	cin>>N;
	while(N%2==0){
		N/=2;
		A++;
	}
	while(N%3==0){
		N/=3;
		B++;
	}
	while(N%5==0){
		N/=5;
		C++;
	}
	if(N>1) cout<<"0";
	else cout<<dp(0,0,0);
	return 0;
}
