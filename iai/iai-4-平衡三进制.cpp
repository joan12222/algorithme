#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s[100],top=0;
	cin>>n;
	while(n!=0){
		int r=n%3;
		if(r==-2){
			r=1;
		}
		if(r==2){
			r=-1;
		}
		s[top++]=r;
		n=(n-r)/3;
	}
	if(top==0){
		cout<<0;
	}else{
		while(top>0){
			top--;
			if(s[top]==-1){
				cout<<"z";
			}else{
				cout<<s[top];
			}
		}
	}
	return 0;
}