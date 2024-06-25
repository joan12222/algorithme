#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	if('A'>s[0]||'Z'<s[0]){
		cout<<"No";
		return 0;
	}
	for(int i=1;i<s.size();i++){
		if('a'>s[i]||'z'<s[i]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}
