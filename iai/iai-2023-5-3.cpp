#include<bits/stdc++.h>
using namespace std;
int n;
long long t;
int main(){
    cin>>n>>t;
    long long sum=0,minn=2*(1e18)+1,maxans=-1,ans;
	for(int i=1;i<=n;i++){
		ans=0;
		long long a,b;
		cin>>a>>b;
		if(b<minn){
			minn=b;
			ans=i-1+(t-sum-a)/b;
			maxans=max(maxans,ans);
		}
		sum+=a+b;
	} 
	cout<<maxans;
    return 0;
}

