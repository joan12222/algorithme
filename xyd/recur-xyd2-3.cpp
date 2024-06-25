#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(int x,int y){
	if(x==0||y==0){
		return 0;
	}
	if(x%y==0){
		return min(x,y);
	}else{
		if(x>y){
			return f(y,x%y);
		}else{
			return f(y,x);
		}
	}
}
int main(){
	ll n,m;
	cin>>n>>m;
	cout<<f(n,m);
	return 0;
}