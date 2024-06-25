#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int len1=s1.size();
	int len2=s2.size();
	int len3=len1+len2;
	int a[1005]={0},b[1005]={0};
	long long c[2010]={0};
	for(int i=0;i<len1;i++){
		a[len1-i]=s1[i]-'0';
	}
	for(int i=0;i<len2;i++){
		b[len2-i]=s2[i]-'0';
	}
	for(int i=1;i<=len1;i++){
		for(int j=1;j<=len2;j++){
			c[i+j-1]+=a[i]*b[j];
		}
	}
	for(int i=1;i<=len3;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(len3>1&&c[len3]==0){
		len3--;
	}
	for(int i=len3;i>=1;i--){
		cout<<c[i];
	}
	return 0;
}