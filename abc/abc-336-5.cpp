#include<bits/stdc++.h>
using namespace std;
#define ll long long
string n;
int ROOT;
bool mem[15][150][2][150];
ll cache[15][150][2][150];
ll solve(int sz,int root,bool limited,int res){
	if(sz==n.size()){
		if(root!=ROOT) return 0;
		return res==0;
	}else{
		if(mem[sz][root][limited][res]) return cache[sz][root][limited][res];
		char end=(limited)?n[sz]:'9';
		ll sum=0;
		for(char c='0';c<=end;c++) sum+=solve(sz+1,root+c-'0',limited&(c==end),(res*10+c-'0')%ROOT);
		mem[sz][root][limited][res]=true;
		return cache[sz][root][limited][res]=sum;
	}
}
int main(){
	cin>>n;
	ll sum=0;
	for(int ROOT=1;ROOT<=126;ROOT++){
		memset(mem,0,sizeof(mem));
		sum+=solve(0,0,1,0);
	}
	cout<<sum;
	return 0;
}
