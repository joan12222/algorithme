#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n,m,a[100005],s[100005];
	cin>>n>>m;
	s[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	int x,y;
	while(m--){
		cin>>x>>y;
		cout<<s[y]-s[x-1]<<endl;
	}
	return 0;
}