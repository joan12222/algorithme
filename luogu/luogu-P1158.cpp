#include<bits/stdc++.h>
using namespace std;
int n,m1,m2,n1,n2,num,minn=INT_MAX,maxx2=-1;
struct Node{
	int x,y;
	int dis1,dis2;
}node[100001];
bool cmp(Node a,Node b){
	if(a.dis1>b.dis1){
		return true;
	}else{
		return false;
	}
}
int main(){
	cin>>m1>>m2>>n1>>n2;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>node[i].x>>node[i].y;
		node[i].dis1=pow(abs(m1-node[i].x),2)+pow(abs(m2-node[i].y),2);
	}
	sort(node+1,node+n+1,cmp);
	minn=node[1].dis1;
	maxx2=pow(abs(n1-node[1].x),2)+pow(abs(n2-node[1].y),2);
	for(int i=2;i<=n;i++){
		node[i].dis2=pow(abs(n1-node[i].x),2)+pow(abs(n2-node[i].y),2);
		minn=min(minn,node[i].dis1+maxx2);
		maxx2=max(node[i].dis2,maxx2);
	}
	cout<<minn;
	return 0;
}
