#include<bits/stdc++.h>
using namespace std;
int n,k,a[50005],mem[50005],ans,fir;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	a[n+1]=2e9;
	for(int i=1,j=1;i<=n;i++){
		while(j<=n&&a[j]-a[i]<=k) j++;
		int sec=j-i;
		mem[j]=max(mem[j],sec);
		fir=max(fir,mem[i]);
		ans=max(ans,fir+sec);
	}
	cout<<ans;
	return 0;
}
