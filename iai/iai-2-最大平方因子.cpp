#include<bits/stdc++.h>
using namespace std;
int n; 
int main(){
	cin>>n;
	for(int i=n;i>=1;i--){
		if(n%i==0&&int(sqrt(i))*int(sqrt(i))==i){
			cout<<i;
			return 0;
		}
	} 
	return 0;
}
