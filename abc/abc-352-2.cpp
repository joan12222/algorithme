#include<bits/stdc++.h>
using namespace std;
string s,t;
int main(){
	cin>>s>>t;
	int j=0;
	for(int i=0;i<s.size();i++){
		while(j+1<t.size()&&t[j]!=s[i]) j++;
		cout<<j+1<<" ";
		j++;
	}
	return 0;
}
