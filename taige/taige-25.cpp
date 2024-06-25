#include<bits/stdc++.h>
using namespace std;
int n,a[1005],st[1005],top=0,cur,ans=true;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1,cur=1;i<=n&&ans;i++){
		while(cur<=a[i]){
			st[++top]=cur++;
		}
		if(st[top]!=a[i]){
			ans=false;
		}
		top--;
	}
	if(ans){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}