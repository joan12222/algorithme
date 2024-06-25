#include<bits/stdc++.h>
using namespace std;
vector<int> f;
int n,m,a[1255],b[1255],bucket[55]={0};
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		bucket[b[i]]=1;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(bucket[i]==0) cnt++;
	}
	if(cnt==1){
		for(int i=1;i<=n;i++){
			if(bucket[i]==0){
				cout<<i;
				return 0;
			}
		}
	}else cout<<"-1";
	return 0;
}
