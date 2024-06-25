#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1001],b[1001];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j+1]<a[j]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}else if(a[j+1]==a[j]){
				if(b[j]>b[j+1]){
					swap(b[j],b[j+1]);
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	double sum=0.0,sum1=0.0;
	for(int i=2;i<=n;i++){
		sum1+=a[i-1];
		sum+=sum1;
	}
	printf("%.2f",sum/n);
	return 0;
}