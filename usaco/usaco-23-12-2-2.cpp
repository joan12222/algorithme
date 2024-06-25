#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,a[500005],b[500005],ra[500005],rb[500005],ans1,ans2,clo[500005],arc[500005];//ans1=in ans2=out
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		ra[a[i]]=i;
	}
	for(int i=1;i<=k;i++){
		cin>>b[i];
		rb[b[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(ra[i]==0&&rb[i]==0) ans2++;
		else if(ra[i]!=0&&rb[i]!=0){
			ans1=max(++clo[(ra[i]-rb[i]+k)%k],ans1);
			ans1=max(++arc[(k+1-ra[i]-rb[i]+k)%k],ans1);
		}
	}
	cout<<ans1+ans2;
	return 0;
}
