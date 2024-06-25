#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
string s;
map<string,int> mp;
bool if_vowel(char c){
	if(c=='a'||c=='o'||c=='e'||c=='u'||c=='i') return true;
	return false;
}
int main(){
	freopen("account.in","r",stdin);  
	freopen("account.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s;
		mp[s]=1;
	}
	if(n==0){
		cout<<"arunumigeba";
		return 0;
	}
	do{
		bool flag=true;
		if(mp.count(s)||!if_vowel(s[s.size()-1])) continue;
		for(int i=0;i<s.size();i++){
			if(i!=0&&!if_vowel(s[i])&&!if_vowel(s[i-1])){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<s;
			return 0;
		}
	}while(next_permutation(s.begin(),s.end()));
	cout<<"NO";
	return 0;
}
