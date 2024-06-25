#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n;
ll x;
string s;
stack<ll> st;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		while(n--){
			cin>>s;
			st.clear();
			if(s=="push"){
				cin>>x;
				st.push(x);
			}else if(s=="pop"){
				if(st.empty()) cout<<"Empty"<<endl;
				else st.pop();
			}else if(s=="query"){
				if(st.empty()) cout<<"Anguei!"<<endl;
				else cout<<st.top()<<endl;
			}else cout<<st.size()<<endl;
		}
	}
	return 0;
}
