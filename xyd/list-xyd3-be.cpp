#include<bits/stdc++.h>
using namespace std;
long long ans=0,num=1;
void f(int tri){
	if(tri==0){
		cout<<ans;
		return;
	}
	for(int i=1;i<=tri;i++){
		ans+=i;
	}
	f(tri-1);
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		ans+=num;
		num+=2;
	}
	f(n-1);
	return 0;
}