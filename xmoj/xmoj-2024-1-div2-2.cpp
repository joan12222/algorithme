#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int main(){
	//freopen("letter.in","r",stdin);
	//freopen("letter.out","w",stdout);
	cin>>a>>b>>n;
	if(n==1) cout<<abs(a-n)+1;
	else if(abs(a-n)<=abs(b-n)) cout<<abs(a-n)+n;
	else cout<<abs(b-n)+a+n-1;
	return 0;
}
