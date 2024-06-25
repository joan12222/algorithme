#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,x[100005],y[100005],a[100005],t[100005]; 
ll merge(int left,int right){
	if(left==right) return 0;
	int mid=(left+right)/2;
	ll sum=0;
	sum+=merge(left,mid);
	sum+=merge(mid+1,right);
	int i=left,j=mid+1,k=left;
	while(i<=mid||j<=right){
		if(i<=mid&&(j>right||a[i]<=a[j])){
			t[k++]=a[i];
			i++;
		}else{
			sum+=mid-i+1;
			t[k++]=a[j];
			j++;
		}
	}
	for(int l=left;l<=right;l++) a[l]=t[l];
	return sum;
}
int main(){
    cin>>n;
    for(int i=1,op1;i<=n;i++){
    	cin>>op1;
    	x[op1]=i;
	}
    for(int i=1,op2;i<=n;i++){
    	cin>>op2;
    	y[op2]=i;
	}
	for(int i=1;i<=n;i++) a[y[i]]=x[i];
	cout<<merge(1,n);
    return 0;
}
