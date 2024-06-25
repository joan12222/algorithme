#include<bits/stdc++.h>
using namespace std;
int l,m,x[100005],y[100005],road[100005];
int main(){
	cin>>l>>m;
	for(int i=1;i<=m;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<=l;i++){
		road[i]=1;
	}
	for(int i=1;i<=m;i++){
		for(int j=x[i];j<=y[i];j++){
			road[j]=0;
		}
	}
	int ans=0;
	for(int i=0;i<=l;i++){
		if(road[i]==1){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}