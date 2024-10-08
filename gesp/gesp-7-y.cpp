#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],ans1,ans2;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	for(int i=1;i<=n;i++) ans1+=a[i][m];
	for(int i=1;i<=n;i++) ans2+=a[m][i];
	cout<<ans1<<" "<<ans2<<" "<<ans1+ans2;
	return 0;
}
