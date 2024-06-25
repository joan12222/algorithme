#include<bits/stdc++.h>
using namespace std;
int n,w;
bool flag=true;
void fama(int n){
	if(n==1) return;
	int lowbit=n%w;
	if(lowbit==w-1) lowbit=-1;
	if(lowbit==0||lowbit==1||lowbit==-1) fama((n-lowbit)/w);
	else{
		flag=false;
		return;
	}
}
int main(){
	cin>>w>>n;
	fama(n);
	if(flag==true) cout<<"Yes";
	else cout<<"No";
	return 0;
}
