#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	int a,b;
}x[100001];
bool cmp(node x,node y){
	if(x.a>y.a){
		return false;
	}else if(x.a<y.a){
		return true;
	}else{
		if(x.b>y.b){
			return false;
		}else{
			return true;
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&x[i].a,&x[i].b);
	}
	sort(x,x+n+1,cmp);
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}else if(a[j]==a[j+1]){
				if(b[j]>b[j+1]){
					swap(a[j],a[j+1]);
					swap(b[j],b[j+1]);
				}
			}
		}
	}
	*/
	for(int i=1;i<=n;i++){
		printf("%d %d\n",x[i].a,x[i].b);
	}
	return 0;
}