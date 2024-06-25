#include <bits/stdc++.h>
using namespace std;
string in,s;
bool check(string s1,string s2){
	if(s1.size()!=s2.size()) return false;
	for(int i=0;i<s1.size();i++){
		if(s2[i]>='A'&&s2[i]<='Z'){
			if(s1[i]!=s2[i]&&s1[i]!=s2[i]+32) return false;
		}
		if(s2[i]>='a'&&s2[i]<='z'){
			if(s1[i]!=s2[i]&&s1[i]!=s2[i]-32) return false;
		}
	}
	return true;
}
int main(){
	getline(cin,in);
	getline(cin,s);
	string now="";
	int start=0,first,ans=0;
	bool is_found=false;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			if(check(now,in)){
				ans++;
				if(is_found==false) first=start;
				is_found=true;
			}
			now="";
			start=i+1;
		}else{
			now+=s[i];
		}
	}
	if(check(now,in)){
		ans++;
		if(is_found==false) first=start;
		is_found=true;
	}
	if(ans==0) cout<<"-1";
	else cout<<ans<<" "<<first;
	return 0;
}
