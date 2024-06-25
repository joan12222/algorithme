#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='B'){
			for(int j=i+1;j<s.size();j++){
				if(s[j]=='A'){
					cout<<"No";
					return 0;
				}
			}
		}
		if(s[i]=='C'){
			for(int j=i+1;j<s.size();j++){
				if(s[j]=='A'||s[j]=='B'){
					cout<<"No";
					return 0;
				}
			}
		}
	}
	cout<<"Yes";
	return 0;	
}
