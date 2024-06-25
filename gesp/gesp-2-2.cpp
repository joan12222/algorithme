#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int split[100],len=0;
void output_digit(int d){
	if(d>=10) cout<<char(d+'A'-10);
	else cout<<char(d+'0');
}
void output_code(int s){
	output_digit(s>>4);
	output_digit(s&0x0f);
}
int main(){
	cin>>n;
	if(n==0){
		cout<<"00";
		return 0;
	}
	while(n){
		split[len++]=int(n&0x7f);
		n>>=7;
	}
	for(int i=0;i<len-1;i++) split[i]|=0x80;
	output_code(split[0]);
	for(int i=1;i<len;i++){
		cout<<" ";
		output_code(split[i]);
	}
	return 0;
}
