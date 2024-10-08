#include<bits/stdc++.h>
using namespace std;
int t,n,a[105],maxx;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		maxx=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i!=n) maxx=max(maxx,a[i]);
		}
		cout<<a[n]+maxx<<endl;
	}
	return 0;
}
