#include<bits/stdc++.h>
using namespace std;
int n,sum[1000],len=1;
int main(){
	cin>>n;
	for(int k=n;k>=1;k--){
		//sum=(sum+1)*k
		sum[0]++;
		for(int i=0;i<len;i++){
			sum[i]*=k;
		}
		for(int i=0;i<len;i++){
			int carry=sum[i]/10;
			sum[i]%=10;
			sum[i+1]+=carry;
		}
		while(sum[len]>0){
			int carry=sum[len]/10;
			sum[len]%=10;
			len++;
			sum[len]=carry;
		}
	}
	for(int i=len-1;i>=0;i--){
		cout<<sum[i];
	}
	return 0;
}