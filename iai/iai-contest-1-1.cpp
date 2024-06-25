#include<bits/stdc++.h>
using namespace std;
int n,c[55];
int main(){
	freopen("catalan.in","r",stdin);
	freopen("catalan.out","w",stdout);
	cin>>n;
	c[0]=c[1]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=i;j++) c[i+1]=(c[i+1]+(c[j]*c[i-j])%1000)%1000;
	}
	cout<<c[n];
	return 0;
}
