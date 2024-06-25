#include<bits/stdc++.h>
using namespace std;
#define ll long long
int len=0,num[20];
ll n;
vector<int> turn2(100,0);
string s[20];
void lowbit(ll x){
	if(x==0) return;
	lowbit(x/2);
	if(x%2==0) turn2.push_back(0);
	else turn2.push_back(1);
}
char calc(int x){
	if(x==10) return 'A';
	if(x==11) return 'B';
	if(x==12) return 'C';
	if(x==13) return 'D';
	if(x==14) return 'E';
	if(x==15) return 'F';
}
int main(){
	cin>>n;
	if(n==0) turn2.push_back(0);
	lowbit(n);
	for(int i=0;i<turn2.size();i+=7){
		for(int j=i;j<=i+6;j++) s[i/7+1][j-i+1]=turn2[j]+'0';
		len++;
	}
	for(int i=1;i<=len;i++){
		if(i==1) s[i][0]='0';
		else s[i][0]='1';
	}
	for(int i=1;i<=len;i++){
		int base=1,val=0;
		for(int j=7;j>=0;j--){
			val+=(s[i][j]-'0')*base;
			base*=2;
		}
		num[i]=val;
	}
	for(int i=len;i>=1;i--){
		char c1,c2;
		if(num[i]%16<=9) c2=num[i]%16+'0';
		else c2=calc(num[i]%16);
		num[i]/=16;
		if(num[i]<=9) c1=num[i]+'0';
		else c1=calc(num[i]);
		cout<<c1<<c2<<" ";
	}
	return 0;
}
