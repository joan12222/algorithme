#include<bits/stdc++.h>
using namespace std;
int n,k,x;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x%k==0) cout<<x/k<<" ";
	}
	return 0;
} 
