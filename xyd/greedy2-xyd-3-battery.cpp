#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1005],maxn,n;
	double sum;
	while(cin>>n){
		maxn=0;
		sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
			if(a[i]>maxn){
				maxn=a[i];
			}
		}
		if(sum-maxn>maxn){
			printf("%.1lf\n",sum/2);
		}else{
			printf("%.1lf\n",sum-maxn);
		}
	}
	return 0;
}