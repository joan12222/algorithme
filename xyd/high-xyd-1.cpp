#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int a[1005]={0},b[1005]={0},c[1005]={0};
	for(int i=s1.size()-1;i>=0;i--){
		a[i]=s1[s1.size()-i-1]-'0';
	}
	for(int i=s2.size()-1;i>=0;i--){
		b[i]=s2[s2.size()-i-1]-'0';
	}
	int len=max(s1.size(),s2.size())+1;
	for(int i=0;i<len;i++){
		c[i]=a[i]+b[i];
	}
	for(int i=0;i<len-1;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	if(c[len-1]==0){
		len--;
	}
	for(int i=len-1;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}