#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int n; 
int main(){
	cin>>n;
	if((n%4==0&&n%100!=0)||n%400==0) cout<<"Leap year";
	else cout<<"Common year";
	return 0;
} 
