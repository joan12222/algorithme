#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
struct Node{
	int val,inx;
	Node* pre;
	Node* next;
};
int n,a[100005],rk[100005],ans[100005];
Node* pos[100005];
bool cmp(int rki,int rkj){
	return a[rki]<a[rkj];
}
//双链表插入模板，在node后面插入新点 （背！！！ 
Node* add_node(Node* node,int ind){
	Node* new_node=new Node();
	new_node->val=a[ind];
	new_node->inx=ind;
	node->next->pre=new_node;
	new_node->next=node->next;
	new_node->pre=node;
	node->next=new_node;
	return new_node;
}
//双链表删除模板,删除node结点（背！！！ 
void delete_node(Node* node){
	node->pre->next=node->next;
	node->next->pre=node->pre;
	delete node;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		rk[i]=i;
		//rk的含义：rank[i]表示排第i名的是谁（是哪个下标）  
	}
	sort(rk+1,rk+n+1,cmp);
	Node head;
	Node tail;
	head.next=&tail;
	tail.pre=&head;
	head.val=a[rk[1]]-1e9;//比最小的数再小10^9
	tail.val=a[rk[n]]+1e9;//比最大的数再大10^9
	for(int i=1;i<=n;i++){
		//数值a[rk[i]],下标：rk[i] 
		pos[rk[i]]=add_node(tail.pre,rk[i]);
	}
	for(int i=n;i>1;i--){
		Node* curr=pos[i];
		if(a[i]-curr->pre->val<=curr->next->val-a[i]){
			ans[i]=curr->pre->inx;
		}else{
			ans[i]=curr->next->inx;
		}
		delete_node(curr);
	}
	for(int i=2;i<=n;i++) cout<<abs(a[ans[i]]-a[i])<<" "<<ans[i]<<endl;
	return 0;
} 
