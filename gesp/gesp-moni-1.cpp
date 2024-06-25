#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,k;
ll num;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>k>>s;
		num=0;
		if(k<=10){
			ll base=1;
			for(int i=s.size()-1;i>=0;i--){
				num+=(s[i]-'0')*base;
				base*=k;
			}
			cout<<num<<endl;
		}else{
			ll base=1;
			for(int i=s.size()-1;i>=0;i--){
				if('0'<=s[i]&&s[i]<='9') num+=(s[i]-'0')*base;
				else{
					if(s[i]=='A') num+=10*base;
					if(s[i]=='B') num+=11*base;
					if(s[i]=='C') num+=12*base;
					if(s[i]=='D') num+=13*base;
					if(s[i]=='E') num+=14*base;
					if(s[i]=='F') num+=15*base;
				}
				base*=k;
			}
			cout<<num<<endl;
		}
	}
	return 0;
}
