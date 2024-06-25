#include<bits/stdc++.h>
using namespace std;
int n;
string a="2020-12-31",b;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b;
		if(b<a) a=b;
	}
	cout<<a;	
	return 0;
}
