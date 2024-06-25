#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a[100001],b[100001]={0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=0;i<100001;i++){
		if(b[i]!=0){
			cout<<i<<" ";
		}
	}
	return 0;
}