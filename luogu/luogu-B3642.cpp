#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int l,r;
}tree[1000005];
void front(int root){
	cout<<root<<" ";
	if(tree[root].l) front(tree[root].l);
	if(tree[root].r) front(tree[root].r);
}
void middle(int root){
	if(tree[root].l) middle(tree[root].l);
	cout<<root<<" ";
	if(tree[root].r) middle(tree[root].r);
}
void back(int root){
	if(tree[root].l) back(tree[root].l);
	if(tree[root].r) back(tree[root].r);
	cout<<root<<" ";
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>tree[i].l>>tree[i].r;
	front(1);
	cout<<endl;
	middle(1);
	cout<<endl;
	back(1);
	return 0;
}
