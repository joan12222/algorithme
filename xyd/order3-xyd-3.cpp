#include<bits/stdc++.h>
using namespace std;
int main(){
	string a[1001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}