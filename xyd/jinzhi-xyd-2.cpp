#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,flag=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]!='0'){
			if(flag==0){
				cout<<s[i]<<"*"<<n<<"^"<<s.size()-i-1;
				flag=1;
			}else{
				cout<<"+"<<s[i]<<"*"<<n<<"^"<<s.size()-i-1;
			}
			
		}
	}
	return 0;
}