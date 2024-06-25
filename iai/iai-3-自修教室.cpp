#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005],sum[100005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	int s,t;
    	cin>>s>>t;
    	a[s]++;
    	a[t+1]--;
    }
    int maxx=-1;
    sum[0]=0;
    for(int i=1;i<=1000000;i++){
    	sum[i]=sum[i-1]+a[i];
    	maxx=max(maxx,sum[i]);
	}
	cout<<maxx;
    return 0;
}
