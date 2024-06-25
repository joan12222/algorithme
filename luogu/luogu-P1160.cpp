#include<bits/stdc++.h>
using namespace std;
struct Node{
	int vis;
	int pre;
	int next;
}a[100005]={0};
int n,m;
void add_node(int k,int i,int p){
	if(p==1){
		a[i].next=a[k].next;
		a[i].pre=k;
		a[k].next=i;
		a[a[i].next].pre=i;
	}else{
		a[i].next=k;
		a[i].pre=a[k].pre;
		a[k].pre=i;
		a[a[i].pre].next=i;
	}
}
int main(){
	cin>>n;
	for(int i=2,k,p;i<=n;i++){
		cin>>k>>p;
		add_node(k,i,p);
	}
	cin>>m;
	int x;
	while(m--){
		cin>>x;
		a[x].vis=1;
	}
	for(int i=a[0].next;i;i=a[i].next){
		if(a[i].vis==0) cout<<i<<" ";
	}
	return 0;
}
