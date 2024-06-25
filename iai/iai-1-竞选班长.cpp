#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int a,b,c,d;
int main(){
	cin>>a>>b>>c>>d;
	if(((a>=90&&b>=90)||(a>=90&&c>=90)||(b>=90&&c>=90))&&d>=85) cout<<"Qualified";
	else cout<<"Not qualified";
	return 0;
} 
