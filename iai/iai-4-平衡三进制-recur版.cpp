#include<bits/stdc++.h>
using namespace std;
int n;
void balance(int n){
	if(n==0) return;
	int lowbit=n%3;
	if(lowbit==-2) lowbit=1;
	if(lowbit==2) lowbit=-1;
	balance((n-lowbit)/3);
	if(lowbit==-1) cout<<"z";
	else cout<<lowbit;
}
int main(){
	cin>>n;
	if(n==0){
		cout<<"0";
		return 0;
	}
	balance(n);
	return 0;
}
