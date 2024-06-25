#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int a,b,c; 
int main(){
	cin>>a>>b>>c;
	if(a+b<=c||a+c<=b||b+c<=a) cout<<"Invalid";
	else if(abs(a-b)>=c||abs(a-c)>=b||abs(b-c)>=a) cout<<"Invalid";
	else cout<<"Valid";
	return 0;
} 
