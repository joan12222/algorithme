#include <bits/stdc++.h>
using namespace std;
string intToStr(int x){
	int a[70],cnt=0;
	while(x){
		a[cnt++]=x%10;
		x/=10;		
	}
	string s;
	for(int i=cnt-1;i>=0;i--){
		s[i]=a[cnt-i-1]+'0';
	}
	return s;
}
int main(){
    int s1,s2;
	int k;
	cin>>s1>>s2>>k;
	long long sum=s1+s2;
	string op1=to_string(s2);
    string op2=to_string(sum);
    string s="";
    s+=to_string(s1);
    s+=to_string(s2);
    while(s.size()<k){
    	s+=op2;
    	int temp=stoi(op1);
    	op1=op2;
    	sum=temp+stoi(op2);
    	op2=to_string(sum);
	}
	cout<<s[k-1];
    return 0;
}