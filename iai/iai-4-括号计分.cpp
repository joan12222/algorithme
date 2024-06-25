#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int exp();
int term(){
	char c;
	cin>>c;//c必然是左括号
	if(cin.peek()==')'){
		cin>>c;//抽走)
		return 1;
	}
	else{
		int res=exp()*2%mod;
		cin>>c;
		return res;
	} 
}
int exp(){
	//end of file
	if(cin.eof()) return 0;
	else if(cin.peek()==')') return 0;
	else return (term()+exp())%mod;
}
int main(){
	cout<<exp();
	return 0;
}
