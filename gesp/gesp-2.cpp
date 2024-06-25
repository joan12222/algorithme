#include<bits/stdc++.h>
using namespace std;
int n;
char g[25][45];
struct Node{
	string val;
	int num;
}vis[260],first[20];
bool cmp(Node x,Node y){
	return x.num>y.num||x.num==y.num&&to16(x.val)<to16(y.val);
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int k=0;
		while(cin>>g[i][k++]>>g[i][k++]){
			string s=g[i][k-2]+g[i][k-1];
			vis[to10(s)].val=s;
			vis[to10(s)].num++;
		}
	}
	sort(vis,vis+25,cmp);
	for(int i=0;i<16;i++){
		cout<<vis[i].val;
		first[i].val=vis[i].val;
		first[i].num=i;
	}
	cout<<endl;
	 
	return 0;
}
