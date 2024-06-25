#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	if(a>b){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n,x,cnt[15]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cnt[x]++;
	}
	sort(cnt+1,cnt+10+1,cmp);
	cout<<cnt[1]-cnt[10];
	return 0;
}