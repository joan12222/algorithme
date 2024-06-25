#include<bits/stdc++.h>
using namespace std;
int n,p[5000005],k;
bool isprime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}/*
void init(){
	for(int i=2;i<=1e12;i++){
		if(isprime(i)) p[++k]=i;
	}
}*/
int main(){
	//init();
	cin>>n;
	for(int i=2;i<=n;i++){
		if(n==1) break;
		if(!isprime(i)) continue;
		if(n%i==0){
			int num=1;
			n/=i;
			while(n%i==0){
				n/=i;
				num++;
			}
			if(n==1){
				if(num==1) cout<<i;
				else cout<<i<<"^"<<num;
				break;
			}else{
				if(num==1) cout<<i<<" * ";
				else cout<<i<<"^"<<num<<" * ";
			}
		}
	}
	return 0;
}
