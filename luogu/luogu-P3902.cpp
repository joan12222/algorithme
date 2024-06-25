#include<bits/stdc++.h>
using namespace std;
int n,a[10005],f[10005],k,ans;
int main(){
	cin>>n;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(x>f[k]) f[++k]=x;
		else{
			auto iter=lower_bound(f+1,f+k+1,x)-f;
			f[iter]=x;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
