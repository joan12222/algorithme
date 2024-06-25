#include<bits/stdc++.h>
using namespace std;
int a[1000001],n,num;
int main(){
	scanf("%d",&n);
	scanf("%d",&num);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int left=1,right=n,mid;
	while(left<right){
		mid=(left+right)/2;
		if(num>a[mid]){
			left=mid+1;
		}
		else if(num<a[mid]) {
			right=mid-1;
		}
		else{
			right=mid;
		}
	}
	if(a[left]!=num){
		cout<<"0";
	}
	else{
		cout<<left;
	}
	return 0;
}