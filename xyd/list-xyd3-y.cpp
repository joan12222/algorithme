#include<bits/stdc++.h>
using namespace std;
string s;
int a[1005]={0},c[3005]={0};
int main(){
	cin>>s;
	int len=s.size();
	int len3=len+10;
	for(int i=0;i<len;i++){
		a[len-i-1]=s[i]-'0';
	}
	for(int i=0;i<len3;i++){
		c[i]=a[i]*17; 
	} 
	for(int i=0;i<len3-1;i++){
		c[i+1]+=c[i]/2;
		c[i]%=2;
	}
	while(len3>1&&c[len3-1]==0){
		len3--;
	}
	for(int i=0;i<len3;i++){
		cout<<c[len3-i-1];
	}
	return 0;
}