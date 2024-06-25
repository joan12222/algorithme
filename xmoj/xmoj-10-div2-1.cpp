#include<bits/stdc++.h>
using namespace std;
int k,l;
int main(){
	freopen("pocky.in","r",stdin);
	freopen("pocky.out","w",stdout);
	cin>>l>>k;
	if(l%2==0) l=l/2-1;
	else l=l/2;
	cout<<l/k*k;
	return 0;
}
