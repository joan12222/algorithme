#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,p[200005],q[200005],cnt;//���� ��ĸ 
void dfs(int lp,int lq,int rp,int rq){//����� ���ĸ �ҷ��� �ҷ�ĸ 
	if(lq+rq>n||cnt>k) return;
	dfs(lp,lq,lp+rp,lq+rq);
	cnt++;
	p[cnt]=lp+rp;
	q[cnt]=lq+rq;
	dfs(lp+rp,lq+rq,rp,rq);
}
int main(){
	cin>>n>>k;
	dfs(0,1,1,1);
	cout<<p[k]<<"/"<<q[k];
	return 0;
}
