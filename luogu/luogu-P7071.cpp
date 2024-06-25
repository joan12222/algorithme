#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll pow2[30];
int main(){
	cin>>n;
	if(n%2==1){
		cout<<"-1";
		return 0;
	}
	pow2[1]=1;
	for(int i=2;i<=26;i++) pow2[i]=pow2[i-1]*2;
	for(int i=26;i>=2;i--){
		if(n>=pow2[i]){
			n-=pow2[i];
			cout<<pow2[i]<<" ";
		}
		if(n==0) return 0;
	}
	if(n!=0) cout<<"-1";
	return 0;
} 
