#include<bits/stdc++.h>
using namespace std;
int n,f[505][505]; 
string s;
int main(){
	cin>>n>>s;
	for(int len=0;len<n;len++){
		for(int l=0;l<n;l++){
			int r=l+len;
			if(r>n-1) break;
			if((s[l+1]=='('&&s[r-1]==')')||(s[l+1]=='['&&s[r-1]==']')) f[l][r]=max(f[l][r],f[l+1][r-1]+2);
			for(int p=l;p<r;p++) f[l][r]=max(f[l][r],f[l][p]+f[p+1][r]);
		}
	}
	cout<<f[0][n-1];
	return 0;
}
