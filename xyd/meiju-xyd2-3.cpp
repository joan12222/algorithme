#include<bits/stdc++.h>
using namespace std;
int main(){
	for(long long n=99381;n>=31990;n--){
		long long num=n*n;
		int vis[10]={},sum=0;
		while(num){
			vis[num%10]++;
			sum+=vis[num%10];
			num/=10;
		}
		if(sum==10){
			cout<<n*n;
			return 0;
		}
	}
	return 0;
}