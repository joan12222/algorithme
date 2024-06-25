#include<bits/stdc++.h>
using namespace std;
struct Node{
	int val;
	Node *prev,*next;
};
int n,q;
map<int,Node*> mp;
void addNode(Node *p,int x){
	Node *np=new Node();
	np->val=x;
	np->next=p->next;
	np->prev=p;
	p->next->prev=np;
	p->next=np;
	mp[x]=np;
}
void deleteNode(Node *p){
	p->prev->next=p->next;
	p->next->prev=p->prev;
	mp.erase(p->val);
	delete p;
}
Node *head=new Node();
Node *tail=new Node();
int main(){
	cin>>n;
	Node *pnode;
	head->next=tail;
	tail->prev=head;
	pnode=head;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		addNode(pnode,x);
		pnode=mp[x];
	}
	cin>>q;
	while(q--){
		int op;
		cin>>op;
		if(op==1){
			int x,y;
			cin>>x>>y;
			addNode(mp[x],y);
		}else{
			int x;
			cin>>x;
			deleteNode(mp[x]);
		}
	}
	while(head!=tail){
		if(head->val!=0) cout<<head->val<<" ";
		head=head->next;
	}
	return 0;
}
