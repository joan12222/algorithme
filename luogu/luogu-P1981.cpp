#include<bits/stdc++.h>
using namespace std;
#define ll long long
string line;
const int mod=10000;
//string numa,numb;
int numa,numb;
char op;
stack<int> s;
/*
int calc(string s){
	int val=0;
	for(int i=s.size()-1;i>=0;i--){
		cout<<s[i]-'0'<<" ";
		val=val*10+s[i]-'0';
	}
	return val;
}
*/
int main(){
	/*
	getline(cin,line);
	stringstream sin(line);
	string token;
	sin>>token;
	numa+=token;
	while(sin>>token&&("0"<=token&&token<="9")) numa+=token;
	cout<<numa<<" ";
	cout<<calc(numa)<<endl;
	s.push(calc(numa)%mod);
	*/
	cin>>numa;
	numa%=mod;
	s.push(numa);
	while(cin>>op>>numb){
		/*
		numb+=token;
		while(sin>>token&&("0"<=token&&token<="9")) numb+=token;
		int val=calc(numb)%mod;
		*/
		if(op=='*'){
			int x=s.top();
			s.pop();
			s.push(x*numb%mod);
		}else s.push(numb);
	}
	ll ans=0;
	while(!s.empty()){
		ans+=s.top();
		ans%=mod;
		s.pop();
	}
	cout<<ans;
	return 0;
}
