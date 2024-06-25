#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
string change_string(ll x){
	string op="";
	while(x){
		op+=(x%10+'0');
		x/=10;
	}
	string ans="";
	int len=op.size();
	for(int i=0;i<len;i++) ans+=op[len-i-1];
	return ans;
}
string hdminus(string s1,string s2){
	int a[25]={0},b[25]={0},c[25]={0};
	int len1=s1.size();
	int len2=s2.size();
	int len3=min(len1,len2)+1;
	for(int i=0;i<len1;i++) a[len1-i-1]=s1[i]-'0';
	for(int i=0;i<len2;i++) b[len2-i-1]=s2[i]-'0';
	for(int i=0;i<len3;i++) c[i]=a[i]-b[i];
	for(int i=0;i<len3-1;i++){
		if(c[i]<0){
			c[i]+=10;
			c[i+1]--;
		}
	}
	while(len3>1&&c[len3-1]==0) len3--;
	string ans="";
	for(int i=0;i<len3;i++) ans+=(c[len3-i-1]+'0');
	return ans;
}
string hdmultiple(string s1,string s2){
	int a[25]={0},b[25]={0},c[45]={0};
	int len1=s1.size();
	int len2=s2.size();
	int len3=len1+len2;
	for(int i=0;i<len1;i++) a[len1-i-1]=s1[i]-'0';
	for(int i=0;i<len2;i++) b[len2-i-1]=s2[i]-'0';
	for(int i=0;i<len1;i++){
		for(int j=0;j<len2;j++){
			c[i+j]+=a[i]*b[j];
		}
	}
	for(int i=0;i<len3-1;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(len3>1&&c[len3-1]==0) len3--;
	string ans="";
	for(int i=0;i<len3;i++) ans+=(c[len3-i-1]+'0');
	return ans;
}
string hddivide(string s1){
	int a[45]={0},b[45]={0};
	int len=s1.size();
	for(int i=0;i<len;i++) a[i]=s1[i]-'0';
	int remain=0;
	int i=0,k=0;
	while(i<len){
		int now=remain*10+a[i];
		if(now<2) now=now*10+a[i++];
		b[k++]=now/2;
		remain=now%2;
		i++;
	}
	string ans="";
	for(int i=0;i<k;i++) ans+=(b[i]+'0');
	return ans;
}
int main(){
	cin>>n;
	string s1=change_string(n-1);//n
	string s2=change_string(n-2);//n-1
	string s3=hdmultiple(s1,s2);//n(n-1)
	string s4=hddivide(s3);//n(n-1)/2
	string s5=hddivide(s1);//half
	string s6=hdminus(s1,s5);//n-half
	string s7=hdminus(s6,"1");//n-half-1
	string s8=hdmultiple(s6,s7);//(n-half)(n-half-1)
	string s9=hdmultiple(s8,"3");//3(n-half)(n-half-1)
	string s10=hddivide(s9);//3/2(n-half)(n-half-1)
	string s11=hdminus(s4,s10);
	//cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl<<s7<<endl<<s8<<endl<<s9<<endl<<s10<<endl<<s11;
	int len=s11.size();
	for(int i=0; i<len; i++) {
		cout<<s11[len-i-1];
	}
	return 0;
}
