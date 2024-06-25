#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(int x){
	if(x<=1){
		return 1;
	}else{
		return 2*f(x-1)+1;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}