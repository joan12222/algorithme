#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll s,m,l,r,ans;
int main(){
	cin>>s>>m>>l>>r;
	if((r-l)%m==0) ans+=(r-l)/m;
	else ans+=(r-l)/m+1;
	if(l>=s){
		if(r>=s){
			if(abs(l-s)%m==0||abs(r-s)%m==0) ans++;
			else if(abs(l-s)%m==0||abs(r+s)%m==0) ans++;
		}
	}else{
		if(r>=s){
			if(abs(l+s)%m==0||abs(r-s)%m==0) ans++;
			else if(abs(l+s)%m==0||abs(r+s)%m==0) ans++;
		}
	}
	cout<<ans;
	return 0;
}
