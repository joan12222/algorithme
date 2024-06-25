#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b+c!=180){
		cout<<"Error";
		return 0; 
	} 
	if(a==60&&b==60&&c==60){
		cout<<"Equilateral";
		return 0;
	}
	if(a==90){
		if(b==45&&c==45){
			cout<<"Isosceles right";
			return 0;
		}
	}else if(b==90){
		if(a==45&&c==45){
			cout<<"Isosceles right";
			return 0;
		}
	}else if(c==90){
		if(a==45&&b==45){
			cout<<"Isosceles right";
			return 0;
		}
	}
	if(a==b||b==c||c==a){
		cout<<"Isosceles";
		return 0;
	}
	if(a==90||b==90||c==90){
		cout<<"Right";
		return 0;
	}
	cout<<"Scalene";
	return 0;
}
