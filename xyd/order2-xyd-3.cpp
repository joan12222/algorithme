#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,a[1001],item;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		item=a[i];
		for(int j=0;j<i;j++){
			if(item<a[j]){
				for(int k=i;k>j;k--){
					a[k]=a[k-1];
				}
				a[j]=item;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}