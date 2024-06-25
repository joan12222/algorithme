#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin>>s;
	int a[10];
	for(int i=s.size()-1;i>=0;i--){
		a[s.size()-i-1]=s[i]-'0';
	}
	for(int i=0;i<s.size();i++){
		cout<<a[i];
	}
	cout<<s;
	return 0;
}