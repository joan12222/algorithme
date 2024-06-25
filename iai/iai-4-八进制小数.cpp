#include<bits/stdc++.h>
using namespace std;
int base[10000]={1,2,5};
int sum[10000]={0};
int main(){
	int len=3;
	char c;
	while(cin>>c&&c!=EOF){
		int weight=c-'0';
		for(int i=0;i<len;i++){
			sum[i]+=base[i]*weight;
		}
		int r=0;
		for(int i=0;i<len;i++){
			base[i]+=r*10;
			r=base[i]%8;
			base[i]/=8;
		}
		while(r>0){
			base[len]=r*10;
			r=base[len]%8;
			base[len]/=8;
			len++;
		}
	}
	for(int i=len-1;i>0;i--){
		int carry=sum[i]/10;
		sum[i-1]+=carry;
		sum[i]%=10;
	}
	while(len>0&&sum[len-1]==0){
		len--;
	}
	for(int i=0;i<len;i++){
		cout<<sum[i];
	}
	return 0;
}