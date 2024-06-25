#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,a[100001],sum=0;
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&a[1]);
	for(int i=2;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]+a[i-1]>x){
			int eat=a[i]+a[i-1]-x;
			if(a[i]<eat){
				a[i]=0;
			}else{
				a[i]-=eat;
			}
			sum+=eat;
		}
	}
	printf("%d",sum);
	return 0;
}