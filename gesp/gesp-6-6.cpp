#include<bits/stdc++.h>
using namespace std;
int n,a[15],b[15],op[15],ans=1e9;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) op[i]=i;
	do{
		int num=n;
		for(int i=2;i<=n;i++) num+=max(b[op[i-1]],a[op[i]]);
		ans=min(ans,num);	
	}while(next_permutation(op+1,op+n+1));
	cout<<ans;
	return 0;
}
