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
//˫�������ģ�壬��node��������µ� ���������� 
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
//˫����ɾ��ģ��,ɾ��node��㣨�������� 
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
		//rk�ĺ��壺rank[i]��ʾ�ŵ�i������˭�����ĸ��±꣩  
	}
	sort(rk+1,rk+n+1,cmp);
	Node head;
	Node tail;
	head.next=&tail;
	tail.pre=&head;
	head.val=a[rk[1]]-1e9;//����С������С10^9
	tail.val=a[rk[n]]+1e9;//���������ٴ�10^9
	for(int i=1;i<=n;i++){
		//��ֵa[rk[i]],�±꣺rk[i] 
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
