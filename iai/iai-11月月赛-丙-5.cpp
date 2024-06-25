#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,a[1000005],mid;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>s;
		int cnt=0,mid;
		for(int i=0;i<s.size();i++){
			if(s[i]=='@') a[++cnt]=i;
		}
		mid=cnt/2+1;
		ll dist=0;
		for(int i=1;i<=cnt;i++) dist+=abs(a[mid]-a[i])-abs(mid-i);
		/*
		if(n%2==0) mid=n/2;
		else mid=n/2+1;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			if(s[i-1]=='@') a[i]=a[i-1]+1;
			else a[i]=a[i-1];
		}
		ll dist=0;
		for(int i=1;i<=n;i++){
			if(s[i-1]!='@'||i==mid) continue;
			dist+=abs(mid-i)-a[max(i,mid)]+a[min(i,mid)];
		}
		*/
		cout<<dist<<endl;
	}
	return 0;
}
