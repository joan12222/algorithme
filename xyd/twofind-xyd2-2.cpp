#include<bits/stdc++.h>
using namespace std;
int a[1000001],n,m;
int main(){
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	//3
	//1 2 2 3 5
	//mid 3;right 2
	int left=1,right=n+1,mid;
	while(left<right){
		mid=(left+right)/2;
		if(m==a[mid]){
			left=mid+1;
		}
		else if(a[mid]>m){
			right=mid;
		}
		else{
			left=mid+1;
		}
	}
	cout<<left;
	return 0;
}