#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long f(int x,int y){
	if(x<=0||y<=0){
		return 1;
	}else{
		return f(x-1,y)+2*f(x-1,y-1)+3*f(x,y-1);
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<f(n,m);
	return 0;
}