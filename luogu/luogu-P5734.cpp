#include<bits/stdc++.h>
using namespace std;
int q;
string s;
int main(){
	cin>>q>>s;
	while(q--){
		int op;
		cin>>op;
		if(op==1){
			string add;
			cin>>add;
			s+=add;
			cout<<s<<endl;
		}else if(op==2){
			int start,len;
			cin>>start>>len;
			s=s.substr(start,len);
			cout<<s<<endl;
		}else if(op==3){
			int place;
			string addition;
			cin>>place>>addition;
			s=s.insert(place,addition);
			cout<<s<<endl;
		}else{
			string findstr;
			cin>>findstr;
			int ans=s.find(findstr);
			cout<<ans<<endl;
		}
	}
	return 0;
}
