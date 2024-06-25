#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int n,ans;
int main(){
	cin>>n>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) ans++;
	}
	cout<<ans;
	return 0;
}
