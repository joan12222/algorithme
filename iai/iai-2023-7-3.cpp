#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100005];
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=abs(a[i]);
	}
	int num=gcd(a[1],a[2]);
	for(int i=3;i<=n;i++){
		if(num==1){
			cout<<"1";
			return 0;
		}
		if(a[i]%num!=0&&num==min(a[i-1],a[i-2])){
			cout<<"1";
			return 0;
		}
		while(a[i]%num!=0){
			int op=min(a[i-1],a[i-2])/num;
			num/=op;
		}
	}
	cout<<num;
	return 0;
}
