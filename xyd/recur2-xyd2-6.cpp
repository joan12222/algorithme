#include<bits/stdc++.h>
using namespace std;
double f(double x,int n){
	if(n==1){
		return sqrt(1+x);
	}else{
		return sqrt(f(x,n-1)+n);
	}
}
int main(){
	double x;
	int n;
	cin>>x>>n;
	printf("%.2lf",f(x,n));
	return 0;
}