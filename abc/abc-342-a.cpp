#include<bits/stdc++.h>
using namespace std;
string s;
int bucket[30];
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++) bucket[s[i]-'a'+1]++;
	for(int i=1;i<=26;i++){
		if(bucket[i]==1){
			for(int j=0;j<s.size();j++){
				if(s[j]==char('a'+i-1)){
					cout<<j+1;
					return 0;
				}
			}
		}
	}
	return 0;
}
