#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[300005],c[300005],now,ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++){
		ll need=c[i]-now,sum=0;
		ll j=i+1;
		while(j<n&&a[j]<=a[i]){
			need+=c[j];
			sum+=c[j];
			j++;
		}
		//cout<<i<<" "<<need<<" ";
		if(need<=0) continue;
		if(need%a[i]==0){
			ans+=need/a[i];
			//cout<<need/a[i]<<endl;
		}
		else{
			ans+=need/a[i]+1;
			//cout<<need/a[i]+1<<endl;
			now+=a[i]*(need/a[i]+1)-c[i];
			now-=sum;
		}
		i=j-1;
	}
	cout<<ans;
	return 0;
}
/*
4
2 10
1 15
3 11
3 15
*/
