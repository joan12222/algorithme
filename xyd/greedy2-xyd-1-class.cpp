#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int begin[32768],end[32768];
	for(int i=1;i<=n;i++){
		cin>>begin[i]>>end[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(end[j]>end[j+1]){
				swap(end[j],end[j+1]);
				swap(begin[j],begin[j+1]);
			}
		}
	}
	int sum=0,j=0;
	for(int i=1;i<=n;i++){
		if(end[j]<=begin[i]){
			j=i;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}