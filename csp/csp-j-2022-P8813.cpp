#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	long long pro=1;
	for(int i=1;i<=x;i++){
		pro*=n;
		if(pro>(1e9)){
			cout<<"-1";
			return 0;
		}
	}
	cout<<pro;
	return 0;
}