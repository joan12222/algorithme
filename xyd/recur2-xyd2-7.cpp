#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double f(double x,int n){
	if(n==1){
		return x/(x+1);
	}else{
		return x/(n+f(x,n-1));
	}
}
int main(){
	double x;
	int n;
	cin>>x>>n;
	printf("%.2lf",f(x,n));
	return 0;
}