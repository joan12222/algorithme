#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	int n,a[100001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(a[i]<i){
			printf("%d\n",i);
			return 0;
		}
	}
	printf("%d\n",n);
	return 0;
}