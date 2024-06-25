#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100005],t[100005];
const int mod=1e8-3;
struct Node{
	int num;
	int val;
}x[100005],y[100005];
bool cmp(Node p,Node q){
	return p.val<q.val;
}
ll merge(int left,int right){
	if(left==right) return 0;
	int mid=(left+right)/2;
	ll sum=0;
	sum=(sum+merge(left,mid))%mod;
	sum=(sum+merge(mid+1,right))%mod;
	int i=left,j=mid+1,k=left;
	while(i<=mid||j<=right){
		if(i<=mid&&(j>right||a[i]<=a[j])){
			t[k++]=a[i];
			i++;
		}else{
			sum=(sum+mid-i+1)%mod;
			t[k++]=a[j];
			j++;
		}
	}
	for(int l=left;l<=right;l++) a[l]=t[l];
	return sum;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>x[i].val;
    	x[i].num=i;
	}
    for(int i=1;i<=n;i++){
    	cin>>y[i].val;
    	y[i].num=i;
	}
    sort(x+1,x+n+1,cmp);
    sort(y+1,y+n+1,cmp);
    for(int i=1;i<=n;i++) a[y[i].num]=x[i].num;
    cout<<merge(1,n);
    return 0;
}
