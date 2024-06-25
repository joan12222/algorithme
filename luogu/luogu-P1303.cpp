#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[2005]={0},b[2005]={0},c[4005]={0};
int main(){
	cin>>s1>>s2;
	if(s1=="0"&&s2=="0"){
		cout<<"0";
		return 0;
	}
	int len1=s1.size();
	int len2=s2.size();
	int len3=len1+len2;
	for(int i=0;i<len1;i++) a[len1-i-1]=s1[i]-'0';
	for(int i=0;i<len2;i++) b[len1-i-1]=s2[i]-'0';
	for(int i=0;i<len1;i++){
		for(int j=0;j<len2;j++){
			c[i+j]+=a[i]*b[j];
		}
	}
	for(int i=0;i<len3-1;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(len3>1&&c[len3]==0) len3--;
	for(int i=0;i<len3;i++) cout<<c[len3-i-1];
	return 0;
}
