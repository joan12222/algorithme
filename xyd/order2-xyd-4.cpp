#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
int n,a[100001],b[100001],c[100001]={0};
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		b[i]=abs(a[i+1]-a[i]);
	}
	//1 4 2 3
	//3 2 1
	//2 3 1
	for(int i=1;i<=n-1;i++){
		c[b[i]]++;
	}
	for(int i=1;i<=n-1;i++){
		if(c[i]!=1){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}