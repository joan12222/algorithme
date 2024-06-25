#include<bits/stdc++.h>
using namespace std;
int a,b;
bool flag=false;
bool is_prime(int x){
	if(x==1||x==0) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(is_prime(i)&&is_prime(i/10)){
			cout<<i<<endl;
			flag=true;
		}
	}
	if(flag==false){
		cout<<"None";
	}
	return 0;
}
