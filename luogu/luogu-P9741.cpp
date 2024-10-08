#include<bits/stdc++.h>
using namespace std;
int n,a[2000005],ans[2000005],num,pos;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		num=n-i+1;
		pos=0;
		if(num%2==0){
			pos=num/2;
			ans[i+pos]=a[i];
		}else{
			num--;
			pos+=num/2*i;
			pos-=(num/2+1)*(i-1);
			ans[i+pos]=1-a[i];
		}
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}
