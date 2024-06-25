#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,c[100005],fa[100005];
int main(){
	cin>>n;
	for(int i=1;i<n;i++) cin>>fa[i];
	for(int i=1;i<=n;i++) cin>>c[i];
	int ans=0;
	for(int i=2;i<=n;i++){
		if(c[i]!=c[fa[i-1]]) ans++;
	}
	cout<<ans+1;
	return 0;
}
