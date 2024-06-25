#include<bits/stdc++.h>
using namespace std;
int n,d;
int main(){
	cin>>n>>d;
	if(n%d==0) cout<<n;
	else{
		int dd1=n-(n/d*d),dd2=(n/d+1)*d-n;
		if(dd1>dd2) cout<<(n/d+1)*d;
		else if(dd1<dd2) cout<<n/d*d;
		else cout<<n/d*d<<endl<<(n/d+1)*d;
	}
	return 0;
}
