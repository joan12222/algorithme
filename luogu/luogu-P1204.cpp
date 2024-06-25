#include<bits/stdc++.h>
using namespace std;
int n,s,t,mins,maxt,a[1000005],now,num1,num2,ans1,ans2;
int main(){
	cin>>n;
	mins=1e7;
	for(int i=1;i<=n;i++){
		cin>>s>>t;
		a[s]++;
		a[t]--;
		mins=min(s,mins);
		maxt=max(t,maxt);
	}
	for(int i=mins;i<=maxt;i++){
		now+=a[i];
		if(now<1){
			ans1=max(ans1,num1);
			num1=0;
		}else num1++;
		if(now!=0){
			ans2=max(ans2,num2);
			num2=0;
		}else num2++;
	}
	cout<<ans1<<" "<<ans2;
	return 0;
}
