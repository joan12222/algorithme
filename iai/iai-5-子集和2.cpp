#include<bits/stdc++.h>
using namespace std;
const int maxn=2500*1500+5;
bitset<maxn> bucket;
int n,a[1505],sum=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	bucket[0]=true;
	for(int i=1;i<=n;i++) bucket|=bucket<<a[i];
	for(int i=(sum+1)/2;i<=sum;i++){
		if(bucket[i]==true){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
