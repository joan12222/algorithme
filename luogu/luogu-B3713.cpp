#include<bits/stdc++.h>
using namespace std;
int n,m;
string name[15],s,correct,wrong;
bool if_same(string s1,string s2){
	if(s1.size()!=s2.size()) return false;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) return false;
	}
	return true;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>name[i];
	while(n--){
		cin>>s;
		for(int i=1;i<=m;i++){
			cin>>wrong;
			correct=s+".zip/"+s+"/"+name[i]+"/"+name[i]+".cpp";
			if(if_same(wrong,correct)) cout<<"Fusu is happy!"<<endl;
			else cout<<"Fusu is angry!"<<endl;
		}
	}
	return 0;
}
