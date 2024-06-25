#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string ss="";
	while(n!=0){
		int x=n%2;
		n/=2;
		ss+=x+'0';
	}
	for(int i=ss.size()-1;i>=0;i--){
		cout<<ss[i];
	}
	return 0;
}