#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[100005],add,mns;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=2;i<=n;i++){
		ll num=a[i]-a[i-1];
		if(num>0) add+=num;
		else mns-=num;
	}
	cout<<max(add,mns)<<endl<<abs(add-mns)+1;
	return 0;
}
