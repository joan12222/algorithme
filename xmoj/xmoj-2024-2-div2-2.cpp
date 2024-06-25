#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l,r,ans;
string op;
void lowbit(ll x){
	if(x==0) return;
	lowbit(x/2);
	if(x%2==1) op+='1';
	else op+='0';
}
bool if_para(string s){
	string s1=s;
	reverse(s.begin(),s.end());
	if(s1==s) return true;
	return false;
}
int main(){
	//freopen("number.in","r",stdin);
	//freopen("number.out","w",stdout);
	cin>>l>>r;
	for(ll x=l;x<=r;x++){
		if(if_para(to_string(x))) ans++;
		else{
			op="";
			lowbit(x);
			if(if_para(op)) ans++;
		}
	}
	cout<<ans;
	return 0;
}
