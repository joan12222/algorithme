#include<bits/stdc++.h>
using namespace std;
bool flag=false,flag1=false;
int n,h,w,a[10],b[10],vis[15][15];
vector<int> idx;
bool calc(int s1,int e1,int s2,int e2){
	for(int i=s1;i<=e1;i++){
		for(int j=s2;j<=e2;j++){
			if(vis[i][j]!=1e9) return false;
		}
	}
	return true;
}
bool check(int k){
	if(k==idx.size()) return true;
	for(int i=1;i<=h;i+=a[k]){
		if(h-i<a[k]) break;
		for(int j=1;j<w;j+=b[k]){
			if(w-j<b[k]) break;
			if(calc(i,i+a[k]-1,j,j+b[k]-1)){
				for(int w=i;w<i+a[k];w++){
					for(int l=j;l<j+b[k];l++) vis[w][l]=k;
				}
				flag1=check(k+1);
				for(int w=i;w<i+a[k];w++){
					for(int l=j;l<j+b[k];l++) vis[w][l]=1e9;
				}
			}
		}
	}
	if(flag1) return true;
	for(int i=1;i<=h;i+=b[k]){
		if(h-i<b[k]) break;
		for(int j=1;j<w;j+=a[k]){
			if(w-j<a[k]) break;
			if(calc(i,i+b[k]-1,j,j+a[k]-1)){
				for(int w=i;w<i+b[k];w++){
					for(int l=j;l<j+a[k];l++) vis[w][l]=k;
				}
				flag1=check(k+1);
				for(int w=i;w<i+b[k];w++){
					for(int l=j;l<j+a[k];l++) vis[w][l]=1e9;
				}
			}
		}
	}
	if(flag1) return true;
	return false;
}
void dfs(vector<int>& idx,int sum,int last){
	if(sum==h*w){
		memset(vis,1e9,sizeof(vis));
		flag=check(0);
		//cout<<"aaa";
		return;
	}
	if(sum>h*w) return;
	for(int i=last+1;i<=n;i++){
		if(a[i]>max(h,w)||b[i]>max(h,w)) continue;
		idx.push_back(i);
		dfs(idx,sum+a[i]*b[i],i);
		cout<<"aaa";
		if(flag) return;
		idx.erase(idx.end());
	}
}
int main(){
	cin>>n>>h>>w;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	idx.clear();
	dfs(idx,0,0);
	if(flag) cout<<"Yes";
	else cout<<"No";
	return 0;
}
