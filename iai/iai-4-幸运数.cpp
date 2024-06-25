#include<bits/stdc++.h>
using namespace std;
long long n;
string s="";
void lucky(int x){
	if(x==0) return;
	int lowbit=x%2;
	lucky(x/2);
	s+=lowbit+'0';
}
int main(){
	cin>>n;
	lucky(n+1);
	for(int i=1;i<s.size();i++){
		if(s[i]=='1') cout<<"8";
		else cout<<"6";
	}
	return 0;
}
