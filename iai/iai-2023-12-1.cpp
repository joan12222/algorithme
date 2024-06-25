#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	if(n%2==0&&m%2==0) cout<<n*m/4*3;
	else if(n%2==1||m%2==1) cout<<n/2*m+n/2*m/2;
	return 0;
}
