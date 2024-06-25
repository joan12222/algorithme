#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int a,b,c;
int main(){
	cin>>a>>b>>c;
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) cout<<"Right Triangle";
	else cout<<"No";
	return 0;
} 
