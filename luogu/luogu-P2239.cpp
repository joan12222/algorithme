#include<bits/stdc++.h>
using namespace std;
int n,x,y;
int matrix(int n,int x,int y){
	if(x==1) return y;
	else if(y==n) return n+x-1;
	else if(x==n) return 3*n-y-1;
	else if(y==1) return 4*n-2-x;
	else return matrix(n-2,x-1,y-1)+4*(n-1);
}
int main(){
	cin>>n>>x>>y;
	cout<<matrix(n,x,y);
	return 0;
}
