#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	string s1=s.substr(3,5);
	int n=stoi(s1);
	if(n>=350||n==316) cout<<"No";
	else cout<<"Yes";
	return 0;
}
