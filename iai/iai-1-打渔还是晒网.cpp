#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int n; 
int main(){
	cin>>n;
	int mod=n%5;
	if(mod==1||mod==2||mod==3) cout<<"Fishing";
	else cout<<"Lying";
	return 0;
} 
