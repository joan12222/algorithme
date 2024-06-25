#include<bits/stdc++.h>
using namespace std;
int a[1000001],n,num;
int main(){
	scanf("%d",&n);
	scanf("%d",&num);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int ans=INT_MAX,sum,j;
	for(int i=1;i<=n;i++){
		sum=abs(num-a[i]);
		if(sum<ans){
			j=i;
			ans=sum;
		}
	}
	cout<<a[j];
	return 0;
}