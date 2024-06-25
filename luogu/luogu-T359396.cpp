#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n;
ll f[1000005],pre[1000005];
void build(){
	f[1]=1,f[2]=1;
	pre[1]=1,pre[2]=2;
	for(int i=3;i<=1000001;i++){
		f[i]=(f[i-1]+f[i-2])%9;
		pre[i]=(pre[i-1]+f[i])%9;
	}
}
int main(){
	build();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<pre[n]%9<<endl;
	}
	return 0;
}
