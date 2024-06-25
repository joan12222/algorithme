#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int main(){
	cin>>n;
	int limit=1,now=0;
	ll ans=0;
	for(int i=1;i<=n;i++){
		now++;
		ans+=limit;
		if(now==limit){
			limit++;
			now=0;
		}
	}
	cout<<ans;
	return 0;
}
