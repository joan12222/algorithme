#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s[100],top=0;
	cin>>n;
	while(n!=0){
		int r;
		if(n%2==0){
			r=0;
		}else{
			r=1;
		}
		s[top++]=r;
		n=(n-r)/-2;
	}
	if(top==0){
		cout<<0;
	}else{
		while(top>0){
			cout<<s[--top];
		}
	}
	return 0;
}