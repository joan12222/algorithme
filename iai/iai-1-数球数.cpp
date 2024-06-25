#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int sum=(a+b+c)/2;
	cout<<sum-b<<endl<<sum-c<<endl<<sum-a;
	return 0;
}
