#include<bits/stdc++.h>
using namespace std;
string s,t;
int last;
int main(){
	cin>>s>>t;
	for(int i=0;i<3;i++){
		t[i]^=32;
		if(i==2&&t[i]=='x') break;
		bool flag=false;
		for(int j=0;j<s.size();j++){
			if(s[j]==t[i]){
				if(i==0){
					last=j;
					flag=true;
					break;
				}else{
					if(j>last){
						last=j;
						flag=true;
						break;
					}
				}
			}
		}
		if(flag==false){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}
