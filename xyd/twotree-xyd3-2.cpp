#include<bits/stdc++.h>
using namespace std;
struct node{
	int l,r;
}a[25];
int main(){
	int n,fa;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>fa;
		if(fa==-1){
			continue;
		}
		if(a[fa].l==0){
			a[fa].l=i;
		}else{
			a[fa].r=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i].l==0){
			a[i].l=-1;
		}
		if(a[i].r==0){
			a[i].r=-1;
		}
		cout<<a[i].l<<" "<<a[i].r<<endl;
	}
	return 0;
}