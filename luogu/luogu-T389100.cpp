#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[505],b[505],c[505];
int main(){
	cin>>s1>>s2;
	int len1=s1.size();
	int len2=s2.size();
	int len3=max(len1,len2);
	for(int i=0;i<len1;i++) a[len1-i-1]=s1[i]-'0';
	for(int i=0;i<len2;i++) b[len2-i-1]=s2[i]-'0';
	for(int i=0;i<len3;i++) c[i]=a[i]+b[i];
	for(int i=0;i<len3-1;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(len3>1&&c[len3-1]==0) len3--;
	for(int i=0;i<len3;i++) cout<<c[len3-i-1];
	return 0;
}
