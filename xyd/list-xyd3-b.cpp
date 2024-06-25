#include<bits/stdc++.h>
using namespace std;
struct node{
	int len;
	int a[31],b[31];
}x[100001];
int main(){
	int n,len;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&len);
		for(int j=1;j<=len;j++){
			scanf("%d",&x[i].a[j]);
			scanf("%d",&x[i].b[j]);
			if(j%2==1){
				printf("%d\n",max(x[i].a[j],x[i].b[j]));
			}else{
				printf("%d\n",min(x[i].a[j],x[i].b[j]));
			}
		}
	}
	return 0;
}