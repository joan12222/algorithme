#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,l[1005],r[1005];
bool mem[1005][1005][2];
ll cache[1005][1005][2];
bool cmp(int x,int y){
	return x>y;
}
ll dp(int left,int right,bool if_left){
	if(left==0&&right==0) return 0;
	if(mem[left][right][if_left]) return cache[left][right][if_left];
	mem[left][right][if_left]=true;
	int fj;
	if(if_left) fj=l[left];
	else fj=r[right];
	ll case1=1LL<<60;
	if(left>0){
		ll dist=fj-l[left-1];
		ll cur_damage=dist*(left+right);
		ll fut_damage=dp(left-1,right,true);
		case1=cur_damage+fut_damage;
	}
	ll case2=1LL<<60;
	if(right>0){
		ll dist=r[right-1]-fj;
		ll cur_damage=dist*(left+right);
		ll fut_damage=dp(left,right-1,false);
		case2=cur_damage+fut_damage;
	}
	return cache[left][right][if_left]=min(case1,case2);
}
int main(){
	cin>>n;
	int left=0,right=0;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(x<0) l[left++]=x;
		if(x>0) r[right++]=x;
	}
	sort(l,l+left);
	sort(r,r+right,cmp);
	l[left]=r[right]=0;
	cout<<dp(left,right,true);
	return 0;
}
