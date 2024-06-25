#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,pow2[30];
void build(){
	pow2[1]=1;
	for(int i=2;i<=25;i++) pow2[i]=pow2[i-1]*2;
}
int main(){
	build();
	cin>>n;
	for(int i=1;i<=25;i++){
		if(pow2[i]>=n){
			cout<<pow2[i]<<" "<<i-1;
			return 0;
		}
	}
	return 0;
}
