#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void f(int x){
	if(x==1){
		cout<<"1"<<" ";
	}else{
		f(x/2);
		cout<<x<<" ";
		f(x-x/2);
	}
}
int main(){
	int n;
	cin>>n;
	f(n);
	return 0;
}