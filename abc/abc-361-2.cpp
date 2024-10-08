#include<bits/stdc++.h>
using namespace std;
int a[15];
bool check(int b,int c,int d,int e){
	if(b>d) swap(b,d),swap(c,e);
	if(c-d<=0) return false;
	return true;
}
int main(){
	for(int i=1;i<=12;i++) cin>>a[i];
	for(int i=0;i<3;i++){
		if(check(a[i+1],a[i+4],a[i+7],a[i+10])==false){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}
