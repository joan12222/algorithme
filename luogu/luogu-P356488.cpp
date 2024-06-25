#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,school[100005],student[100005];
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++) cin>>school[i];
	for(int i=1;i<=n;i++) cin>>student[i];
	ll ans=0;
	/*
	for(int i=1;i<=n;i++){
		int least=0x3f3f3f3f;
		for(int j=1;j<=m;j++){
			least=min(least,abs(student[i]-school[j]));
		}
		ans+=least;
	}
	*/
	sort(school+1,school+m+1);
	sort(student+1,student+n+1);
	for(int i=1;i<=n;i++) ans+=abs(student[i]-school[i]);
	cout<<ans;
	return 0;
}
