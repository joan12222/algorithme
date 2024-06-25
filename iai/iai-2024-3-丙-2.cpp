#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=3;i<=n;i++){
		if(a[i]-a[i-1]!=a[i-1]-a[i-2]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Arithmetic Sequence";
	return 0;
}
