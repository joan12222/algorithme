#include<bits/stdc++.h>
using namespace std;
int t,n,k,d,a[2005],v[100005];
bool check(){
	for(int i=1;i<=n;i++){
		if(a[i]<=i) return true;
	}
	return false;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k>>d;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=0;i<k;i++) cin>>v[i];
		int ans=0;
		for(int i=1;i<=n;i++){
			if(a[i]==i) ans++;
		}
		ans+=(d-1)/2;
		for(int i=1;i<=2*n;i++){
			if(d-i-1<0) break;
			if(check()==false) break;
			int scr=0;
			for(int j=1;j<=v[(i-1)%k];j++) a[j]++;
			for(int j=1;j<=n;j++){
				if(a[j]==j) scr++;
			}
			ans=max(ans,scr+(d-i-1)/2);
		}
		cout<<ans<<endl;
	}
	return 0;
}/*
5 1 1
0 5 0 5 0
5*/
