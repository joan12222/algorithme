#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s;
ll c[200005],f[200005][3],g[200005][3],ans=1e18;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>c[i];
	s.insert(s.begin(),'2');
	s.insert(s.end(),'2');
	for(int i=1;i<=n;i++){
		f[i][0]=f[i-1][1]+(s[i]=='1'?c[i]:0);
		f[i][1]=f[i-1][0]+(s[i]=='0'?c[i]:0);
	}
	for(int i=n;i>=1;i--){
		g[i][0]=g[i+1][1]+(s[i]=='1'?c[i]:0);
		g[i][1]=g[i+1][0]+(s[i]=='0'?c[i]:0);
	}
	for(int i=1;i<=n;i++) ans=min(ans,min(f[i][0]+g[i+1][0],f[i][1]+g[i+1][1]));
	cout<<ans;
	return 0;
}
