#include<bits/stdc++.h>
using namespace std;
int h,w,a[10][10],b[10][10],p[10],q[10],ans;
bool flag=false;
bool check(){
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(a[p[i]][q[j]]!=b[i][j]) return false;
		}
	}
	return true;
}
int calc(){
	int ans1=0;
	for(int i=1;i<=h;i++){
		for(int j=i+1;j<=h;j++){
			if(p[i]>p[j]) ans1++;
		}
	}
	for(int i=1;i<=w;i++){
		for(int j=i+1;j<=w;j++){
			if(q[i]>q[j]) ans1++;
		}
	}
	return ans1;
}
int main(){
	cin>>h>>w;
	for(int i=1;i<=h;i++) p[i]=i;
	for(int i=1;i<=w;i++) q[i]=i;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cin>>a[i][j];
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cin>>b[i][j];
	}
	ans=1e5;
	do{
		do{
			if(check()){
				ans=min(calc(),ans);
				//for(int i=1;i<=h;i++) cout<<
				flag=true;
			}
		}while(next_permutation(q+1,q+w+1));
	}while(next_permutation(p+1,p+h+1));
	if(flag) cout<<ans;
	else cout<<"-1";
	return 0;
}
