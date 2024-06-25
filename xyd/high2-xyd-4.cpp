#include<bits/stdc++.h>
using namespace std;
int c[104]={0},d[107]={0};
int main(){
	int n,x;
	cin>>n;
	int lenc=110,len;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		len=s.size(); // s.size()+1
		for(int i=0;i<len;i++){
			c[len-i]+=s[i]-'0';
		}
	}
	for(int i=0;i<lenc;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(lenc>0&&c[lenc]==0){
		lenc--;
	}
	for(int i=1;i<=lenc;i++){
		d[i]=c[i]*(n-1);
	}
	lenc+=3;
	for(int i=0;i<lenc;i++){ // i=1; i<=lenc
		d[i+1]+=d[i]/10;
		d[i]%=10;
	}
	while(lenc>0&&d[lenc]==0){
		lenc--;
	}
	for(int i=lenc;i>0;i--){
		cout<<d[i];
	}
	return 0;
}