#include<bits/stdc++.h>
using namespace std;
int fa[25],cnt[25]={0};
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>fa[i];
		if(fa[i]!=-1){
			cnt[fa[i]]++;
		}
	}
	for(int i=1;i<=n;i++){
		if(cnt[i]>2){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}