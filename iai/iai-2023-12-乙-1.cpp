#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,x,y;
ll a,b,c,d;
int main(){
	cin>>n;
	while(n--){
		cin>>x>>y;
		if(x+y>0) a+=x+y;
		if(x-y>0) b+=x-y;
		if(y-x>0) c+=y-x;
		if(-y-x>0) d+=-y-x;
	}
	cout<<max(max(a,b),max(c,d));
	return 0;
}
