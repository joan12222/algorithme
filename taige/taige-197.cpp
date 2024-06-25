#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	//freopen("destiny.in", "r", stdin);
	//freopen("destiny.out", "w", stdout);
	int n,x,y;
	cin>>n;
	int bst=10000;
	for(int i=1;i<=99;i++)
	    for(int j=i+1;j<=100;j++){
	    	int d=abs(i*j-n);
	    	if(d<bst){
	    		bst=d;
	    		x=i;y=j;	    		
			}
		}
	cout<<x<<"*"<<y<<"="<<x*y;
	return 0;
}
