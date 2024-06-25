#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[5005],f[5005];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[1]=1;
	for(int i=1;i<=n;i++){
		int maxx=0;
		for(int j=1;j<i;j++){
			if(a[j]<a[i]) maxx=max(maxx,f[j]);
		}
		f[i]=maxx+1;
	}
	sort(f+1,f+n+1);
	cout<<f[n];
	return 0;
}
