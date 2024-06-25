#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p[105];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i];
	int maxx=-1;
	for(int i=2;i<=n;i++) maxx=max(maxx,p[i]);
	if(maxx<p[1]) cout<<"0";
	else cout<<maxx-p[1]+1;
	return 0;
}
