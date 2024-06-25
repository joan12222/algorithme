#include<bits/stdc++.h>
using namespace std;
int n,q;
int t[8005];
struct node{
	int pre,id;
}a[8005];
bool cmp(node x,node y){
	if(x.pre!=y.pre) return x.pre<y.pre;
	return x.id<y.id;
}
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i].pre;
		a[i].id=i;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++) t[a[i].id]=i;
	for(int i=1;i<=q;i++){
		int opt,x,v;
		cin>>opt;
		if(opt==1){
			cin>>x>>v;
			a[t[x]].pre=v;
			for(int j=n;j>=2;j--)
				if(cmp(a[j],a[j-1])){
					node num=a[j];
					a[j]=a[j-1];
					a[j-1]=num;
				}
			for(int j=2;j<=n;j++)
				if(cmp(a[j],a[j-1])){
					node num=a[j];
					a[j]=a[j-1];
					a[j-1]=num;
				}
			for(int j=1;j<=n;j++) t[a[j].id]=j;
		}
		else{
			cin>>x;
			cout<<t[x]<<endl;
		}
	}
	return 0;
}
