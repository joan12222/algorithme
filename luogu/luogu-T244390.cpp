#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	cin>>a>>b>>c;
	int cnt=0;
	if(a<60) cnt++;
	if(b<60) cnt++;
	if(c<60) cnt++;
	if(cnt==1) cout<<"1";
	else cout<<"0";
	return 0;
}
