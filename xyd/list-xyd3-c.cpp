#include<bits/stdc++.h>
using namespace std;
struct node{
	int a,b,c;
}x[100001];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&x[i].a,&x[i].b,&x[i].c);
	}
	int maxa=INT_MIN,maxb=INT_MIN,maxc=INT_MIN,max1[100001]={0},max2[100001]={0},max3[100001]={0};
	for(int i=1;i<=n;i++){
		maxa=max(maxa,x[i].a);
		maxc=max(maxc,x[i].c);
		maxb=max(maxb,x[i].b);
	}
	for(int i=1;i<=n;i++){
		if(maxa==x[i].a){
			max1[i]=1;
		}
		if(maxb==x[i].b){
			max2[i]=1;
		}
		if(maxc==x[i].c){
			max3[i]=1;
		}
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		if(max1[i]==1&&max2[i]==1&&max3[i]==1){
			flag=1;
			cout<<i;
		}
	}
	if(flag==0){
		cout<<"-1";
	}
	return 0;
}