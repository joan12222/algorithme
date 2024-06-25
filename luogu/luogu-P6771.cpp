#include<bits/stdc++.h>
using namespace std;
const int maxn=400*1000+5;
bitset<maxn> bucket;
int n,h[405],a[405],c[405];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>h[i]>>a[i]>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				swap(h[j],h[j+1]);
				swap(a[j],a[j+1]);
				swap(c[j],c[j+1]);
			}
		}
	}
	bucket[0]=true;
	for(int i=1;i<=n;i++){
		for(int j=0;j<c[i];j++){
			bucket|=bucket<<h[i];
		}
		bitset<maxn> mask;
		for(int j=0;j<=a[i];j++) mask[j]=true;
		bucket&=mask;
	}
	for(int i=maxn;i>=0;i--){
		if(bucket[i]==true){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
