#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string ss="";
	if(n==0){
		cout<<"0";
		return 0;
	}
	while(n!=0){
		int x=n%16;
		n/=16;
		if(x<10){
			ss+=x+'0';
		}else{
			ss+=int(x)+55;
		}
	}
	for(int i=ss.size()-1;i>=0;i--){
		cout<<ss[i];
	}
	return 0;
}