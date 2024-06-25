#include<bits/stdc++.h>
using namespace std;
int q[3000000],first[3000000]={0};
int main(){
	int a,b;
	cin>>a>>b;
	int r=a;
	const int base=2;
	int len=0;
	while(r>0&&first[r]==0){
		q[len]=r*base/b;
		len++;
		first[r]=len;
		r=r*base%b;
	}
	cout<<"0.";
	if(r==0){
		for(int i=0;i<len;i++){
			cout<<q[i];
		}
	}else{
		int begin=first[r]-1;
		for(int i=0;i<begin;i++){
			cout<<q[i];
		}
		cout<<"(";
		for(int i=begin;i<len;i++){
			cout<<q[i];
		}
		cout<<")";
	}
	return 0;
}