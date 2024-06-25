#include<bits/stdc++.h>
using namespace std;
int n,k,a[100005],b[100005],ans=1;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sqrt(a[i]);j++){
			if(a[i]%j==0){
				b[j]++;
				if(a[i]/j!=j) b[a[i]/j]++;
			}
		}
	}
	for(int i=1;i<=100000;i++){
		if(b[i]>=k) ans=i;
	}
	cout<<ans;
	return 0;
}
