#include<bits/stdc++.h>
using namespace std;
int fa[25]={0};
int main(){
	int n,a,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(a!=-1) fa[a]=i;
		if(b!=-1) fa[b]=i;
	}
	for(int i=1;i<=n;i++){
		if(fa[i]==0){
			cout<<"-1"<<" ";
		}else{
			cout<<fa[i]<<" ";
		}
	}
	return 0;
}