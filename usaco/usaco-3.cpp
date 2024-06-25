#include<bits/stdc++.h>
using namespace std;
int n,k;
long long ans=0LL,day[100005];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>day[i];
		if(i==1){//是第一天
			ans+=k+1LL;
		}else{
			long long extend=day[i]-day[i-1];
			long long newcost=k+1LL;
			ans+=min(extend,newcost);
		}
	}
	cout<<ans;
}