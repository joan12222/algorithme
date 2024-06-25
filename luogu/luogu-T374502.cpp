#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s1,s2;
ll k;
int main(){
	cin>>s1>>s2>>k;
	if(s1==s2){
		cout<<"0";
		return 0;
	}
	ll diff;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]){
			diff=i;
			break;
		}
	}
	ll zero=0;
	for(int i=diff;i<s2.size();i++){
		if(s2[i]=='0') zero++;
	}
	diff=s1.size()-diff;
	cout<<(diff+2*(diff-1)-zero)*k;
	return 0;
}
