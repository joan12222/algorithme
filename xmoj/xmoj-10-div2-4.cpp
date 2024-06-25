#include<bits/stdc++.h>
using namespace std;
const int mod=573;
string s;
int letter[30],pre[30],triangle[1005][1005],ans=1;
void build(){
	for(int i=0;i<=1004;i++){
		triangle[i][0]=1;
		for(int j=1;j<=i;j++) triangle[i][j]=(triangle[i-1][j]+triangle[i-1][j-1])%mod;
	}
}
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	build();
	/*
	for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++) cout<<triangle[i][j]<<" ";
		cout<<endl;
	}
	*/
	cin>>s;
	for(int i=1;i<=26;i++){
		for(int j=0;j<s.size();j++){
			if(s[j]=='A'+i-1) letter[i]++;
		}
		pre[i]=pre[i-1]+letter[i];
	}
	/*
	for(int i=1;i<=26;i++) cout<<letter[i]<<" ";
	cout<<endl;
	*/
	for(int i=0;i<=25;i++) ans=(ans*triangle[s.size()-pre[i]][letter[i+1]])%mod;
	cout<<ans-1;
	return 0;
}
