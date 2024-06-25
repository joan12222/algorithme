#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i+=2){
		sort(a+1,a+i+1);
		cout<<a[i/2+1]<<endl;
	}
	return 0;
}
