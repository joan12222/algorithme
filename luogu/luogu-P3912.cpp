#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
bool is_prime[100000005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	is_prime[1]=1;
	for(int i=2;i*i<=n;i++){
		if(is_prime[i]==0){
			for(int j=i*i;j<=n;j+=i) is_prime[j]=1;
		}
	}
	int ans=0;
	for(int i=2;i<=n;i++){
		if(is_prime[i]==0) ans++;
	}
	cout<<ans;
	return 0;
}
