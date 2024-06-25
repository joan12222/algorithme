#include<bits/stdc++.h>
using namespace std;
void tok(int n,int k){
	int x[100],i=1;
	while(n!=0){
		x[i++]=n%k;
		n/=k;
	}
	for(int j=i-1;j>0;j--){
		cout<<x[j]<<" ";
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	tok(n,k);
	return 0;
}