#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1000;i<=n-1;i++){
		int g=i%10,s=i/10%10,b=i/100%10,q=i/1000;
		if((10*q+b+10*s+g)*(10*q+b+10*s+g)==i){
			cout<<i<<endl;
		}
	}
	return 0;
}