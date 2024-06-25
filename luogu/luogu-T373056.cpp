#include<bits/stdc++.h>
using namespace std;
int l,r;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>l>>r;
	int ans=0;
	for(int i=l;i<=r;i++){
		if(i%2==1||i%4==0) ans++;
	}
	cout<<ans;
	return 0;
}
