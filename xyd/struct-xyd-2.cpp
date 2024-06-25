#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
struct Data{
	int io;
	int xy;
	int sz;
	double zh;
}x[1001];
int good(int a,int b,int c){
	if((a+b)>140&&c>=80){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i].io>>x[i].xy>>x[i].sz;
		x[i].zh=0.7*(int(x[i].xy))+0.3*(int(x[i].sz));
		if(good(x[i].xy,x[i].sz,x[i].zh)==1){
			cout<<"Excellent"<<endl;
		}else{
			cout<<"Not excellent"<<endl;
		}
	}
	return 0;
}