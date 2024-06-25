#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
char b[500005];
ll f[500005],g[500005],h[500005];
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>b[i];
	for(int m=1;m<=n;m++){
		int bit=(b[n-m]=='1')?1:0;
		if(bit==0){
			f[m]=min(f[m-1],g[m-1]+1);
			g[m]=min(f[m-1],h[m-1]+1);
			h[m]=h[m-1]+1;
		}else{
			f[m]=min(f[m-1]+1,g[m-1]);
			g[m]=min(f[m-1]+1,h[m-1]);
			h[m]=h[m-1];
		}
	}
	cout<<f[n];
	return 0;
}
