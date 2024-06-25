#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[200005],num,minn,ans;
bool flag=true;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		num+=a[i];
		if(a[i]<0&&num<0) minn=max(minn,abs(num));
	}
	cout<<num+minn;
	return 0;
}

/*
1 -2 1 -3
3 -5 7 -4
if(a[i]>0) ans=max(ans-a[i],a[i])
if(a[i]<0) ans=min(ans-a[i],abs(a[i]))
ans=3
*/
