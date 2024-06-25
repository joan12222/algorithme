#include<bits/stdc++.h>
using namespace std;
int ans[101],cnt=0;
struct node{
	int left,right;
}tree[101];
void pre(int a){
	cnt++;
	ans[cnt]=a;
    if(tree[a].left!=0) pre(tree[a].left);
    if(tree[a].right!=0) pre(tree[a].right);
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tree[i].left>>tree[i].right;
	}
	pre(1);
	for(int i=1;i<=cnt;i++){
		if(ans[i]!=-1){
			cout<<ans[i]<<" ";
		}
	}
}