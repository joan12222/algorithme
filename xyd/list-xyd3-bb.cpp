#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=1,ans=0;
	while(n>=0){
		ans++;
		num*=2;
		n-=num;
	}
	cout<<ans;
	return 0;
}