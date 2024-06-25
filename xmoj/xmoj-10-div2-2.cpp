#include<bits/stdc++.h>
using namespace std;
int n,m,c; 
int main(){
	freopen("channel.in","r",stdin);
	freopen("channel.out","w",stdout);
	cin>>n>>m>>c;
	if(n>m) swap(n,m);
	if(n==1){
		if(m==1||m==2) cout<<"YES";
		else cout<<"NO";
	}else{
		if(n%2==1&&m%2==1) cout<<"NO";
		else cout<<"YES";
	}
	return 0;
}
