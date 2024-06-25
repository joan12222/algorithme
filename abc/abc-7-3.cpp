#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
string s;
int main(){
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}	
	n--;
	while(n){
		s+=char('0'+n%5*2);
		n/=5;
	}
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}
