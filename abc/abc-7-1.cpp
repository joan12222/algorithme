#include<bits/stdc++.h>
using namespace std;
int n,a[40];
void lowbit(int x,int idx){
	if(x==0) return;
	if(x%2==1) a[idx]=1;
	else a[idx]=0;
	lowbit(x/2,idx+1);
}
int main(){
	cin>>n;
	lowbit(n,0);
	for(int i=0;i<40;i++){
		if(a[i]==1){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
