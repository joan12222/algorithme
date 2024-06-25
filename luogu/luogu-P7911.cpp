#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
struct String{
	string op;
	string s;
}a[1005];
bool if_same(string s1,string s2){
	if(s1.size()!=s2.size()) return false;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) return false;
	}
	return true;
}
bool check(string s){
	ll num=0;
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<s.size();i++){
		if((i==0||(s[i-1]=='.'||s[i-1]==':'))&&s[i]>='0'&&s[i]<='9') cnt3++;
		if(s[i]=='.'||s[i]==':'){
			if(s[i]=='.') cnt1++;
			else if(s[i]==':') cnt2++;
			if(cnt1<3&&cnt2!=0) return false;
			if(cnt3==0) return false;
			if(0<=num&&num<=255){
				num=0;
				continue;
			}else return false;
		}else if(s[i]<'0'||s[i]>'9') return false;
		if(i!=0&&num==0&&s[i-1]=='0') return false;
		num=num*10+s[i]-'0';
	}
	if(cnt1!=3||cnt2!=1||cnt3!=5) return false;
	if(0<=num&&num<=65535) return true;
	return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].op>>a[i].s;
		if(check(a[i].s)==false){
			cout<<"ERR"<<endl;
			continue;
		}
		bool flag=true;
		if(a[i].op=="Server"){
			for(int j=1;j<i;j++){
				if(a[j].op=="Server"&&if_same(a[i].s,a[j].s)){
					cout<<"FAIL"<<endl;
					flag=false;
					break;
				}
			}
			if(flag) cout<<"OK"<<endl;
			continue;
		}
		if(a[i].op=="Client"){
			for(int j=1;j<i;j++){
				if(a[j].op=="Server"&&if_same(a[i].s,a[j].s)){
					cout<<j<<endl;
					flag=false;
					break;
				}
			}
			if(flag) cout<<"FAIL"<<endl;
		}
	}
	return 0;
}
