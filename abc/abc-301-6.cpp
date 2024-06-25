#include<bits/stdc++.h>
using namespace std;
const ll mod=998244353;
#define ll long long
int n;
string s;
bool upper(char c){
	return c>='A'&&c<='Z';
}
int levelup(int level,char c){
	
}
ll ddos(int prefix,int suffix){
	if(suffix)
}
ll uniq(int presents,int q){
	if(q==0) return 1;
	auto lowercase=26*uniq(presents,q-1);
	auto uppercase=(26-presents)*uniq(presents+1,q-1);
	return (lowercase+uppercase)%mod;
}
int main(){
	cin>>s;
	n=s.size();
	
	return 0;
}
