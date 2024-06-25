#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	//7i+4j=n
	//j=(n-7i)/4
	for(int i=0;i<=n/7;i++){
		if((n-7*i)%4==0&&n>=7*i){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}