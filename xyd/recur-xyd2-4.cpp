#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(int x){
	if(x<=3){
		return 1;
	}else{
		return f(x-1)+2*f(x-3);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}