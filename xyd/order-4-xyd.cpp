#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,a[1001];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	// 10 2 5 3 6
	//i=1
	//j=1...n-1
	//i=2
	//j=1...n-2
	
	for(int i=1;i<=n;i++){ 
		for(int j=1;j<=n-i;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=1; i<=n; i++) {
				cout<<a[i]<<" ";
	}
	cout<<endl; 
	// 10 9 8 7 6 n=5
	// max(i) = ceil(n/2) - 1 = n-1/2
	// i=0: a[1], a[5]
	// i=1:
	// i=2: 
	// 10 9 8 7 n=4
	// max(i) = ceil(n/2) - 1 = n-1/2
	// i=0: a[1], a[4]
	// i=1: a[2], a[3]
	// i=2: a[]
	// 
	for(int i=0;i<=(n-1)/2;i++){
		if(n-i==i+1){
			cout<<a[n-i]<<endl;
		}else{
			cout<<a[1+i]<<endl<<a[n-i]<<endl;
		}
	}
	return 0;
}
