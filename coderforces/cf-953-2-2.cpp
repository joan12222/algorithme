#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,a,b;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		if(b<a){
			cout<<a*n<<endl;
			continue;
		}
		if((b-a)*2>=n) cout<<(b+b-n+1)*n/2<<endl;
		else{
			ll k=b-a+1;
			cout<<(b+a)*k/2+a*(n-k)<<endl;
		}
	}
	return 0;
}
