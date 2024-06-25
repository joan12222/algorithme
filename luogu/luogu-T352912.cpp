#include<bits/stdc++.h>
using namespace std;
int len,t;
string s;
int main(){
	cin>>len>>t>>s;
	while(t--){
		int op;
		cin>>op;
		if(op==1){
			int p;
			char c;
			cin>>p>>c;
			s[p-1]=c;
		}else{
			int l,r;
			cin>>l>>r;
			for(int i=l-1;i<r;i++) cout<<s[i];
			cout<<endl;
		}
	}
	return 0;
}
