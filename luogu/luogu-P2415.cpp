#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x,sum;
int main(){
	while(cin>>x){
		n++;
		sum+=x;
	}
	for(int i=1;i<n;i++) sum*=2;
	cout<<sum;
	return 0;
}
