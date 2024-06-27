#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[300005],t[300005];
ll merge(int left,int right){
	if(left==right) return 0;
	int mid=(left+right)/2;
	ll sum=merge(left,mid)+merge(mid+1,right);
	int i=left,j=mid+1,k=left;
	while(i<=mid||j<=right){
		if(i<=mid&&(j>right||a[i]>=a[j])){
			t[k++]=a[i];
			i++;
		}else{
			sum+=mid-i+1;
			t[k++]=a[j];
			j++;
		}
	}
	for(int i=left;i<=right;i++) a[i]=t[i];
	return sum;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<merge(1,n);
	return 0;
}
