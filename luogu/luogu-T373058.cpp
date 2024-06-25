#include<bits/stdc++.h>
using namespace std;
int n,a[100005],f[15];
int highbit(int x){
	int num;
	while(x){
		num=x%10;
		x/=10;
	}
	return num;
}
int lowbit(int x){
	return x%10;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) f[lowbit(a[i])]=max(f[lowbit(a[i])],f[highbit(a[i])]+1);
	int ans=0;
	for(int i=0;i<10;i++) ans=max(ans,f[i]);
	cout<<n-ans;
	return 0;
}
