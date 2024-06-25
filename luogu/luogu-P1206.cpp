#include<bits/stdc++.h>
using namespace std;
int n,b,num=0;
string s,s1;
string trans(int x,int m){
	string ans="";
	while(x){
		ans+=char(x%m+'0');
		x/=m;
	}
	return ans;
}
bool check(string s){
	string op=s;
	reverse(s.begin(),s.end());
	if(op==s) return true;
	return false;
}
int main(){
	cin>>n>>b;
	int i=b+1;
	while(num<n){
		bool flag=false;
		int cnt=0;
		for(int j=2;j<=10;j++){
			s1=trans(i,j);
			if(check(s1)) cnt++;
			if(cnt==2){
				flag=true;
				break;
			}
		}
		if(flag){
			cout<<i<<endl;
			num++;
		}
		i++;
	}
	return 0;

}
