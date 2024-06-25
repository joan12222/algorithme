#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s[2005];
int sumi[2005],sumj[2005];
ll ans;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		for(int j=0;j<n;j++){
			if(s[i][j]=='o'){
				sumi[i]++;
				sumj[j]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]=='o') ans+=(sumi[i]-1)*(sumj[j]-1);
		}
	}
	cout<<ans;
	return 0;
}
