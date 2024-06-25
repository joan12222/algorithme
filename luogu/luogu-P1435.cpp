#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll ans=0;
bool findsi(int id){
	for(int i=0;i<s.size();i++){
		if(i==id) continue;
		if(s[id]==s[i]) return true;
	}
	return false;
}
int main(){
	cin>>s;
	int n=s.size()-1;
	int l=s.size();
	for(int i=0;i<=n;i++){
		if(findsi(i)==false){
			ans++;
			l++;
		}
	}
	if(l%2==0) ans--;
	cout<<ans;
	return 0;
}
