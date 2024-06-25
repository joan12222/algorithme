#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int binary(int n){
	int ans=0;
	while(n!=0){
		ans+=n%2*10;
		n/=2;
	}
	return ans;
}
int main(){
	for(int i=1;i<=8;i++) cin>>s1[i];
	int n=stoi(s1);
	cout<<binary(n);
	cout<<".";
	for(int i=1;i<=8;i++) cin>>s2[i];
	n=stoi(s2);
	cout<<binary(n);
	cout<<".";
	for(int i=1;i<=8;i++) cin>>s3[i];
	n=stoi(s3);
	cout<<binary(n);
	cout<<".";
	for(int i=1;i<=8;i++) cin>>s4[i];
	n=stoi(s4);
	cout<<binary(n);
	return 0;
}
