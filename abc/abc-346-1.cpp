#include<bits/stdc++.h>
using namespace std;
int n,x1,x2;
int main(){
	cin>>n>>x1;
	for(int i=2;i<=n;i++){
		cin>>x2;
		cout<<x1*x2<<" ";
		x1=x2;
	}
	return 0;
}
