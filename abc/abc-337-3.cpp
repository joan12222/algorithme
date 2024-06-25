#include<bits/stdc++.h>
using namespace std;
int n,nxt[300005],idx;
int main(){
	cin>>n;
	int idx=0;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(x==-1) idx=i;
		else nxt[x]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<idx<<" ";
		idx=nxt[idx];
	}
	return 0;	
}
