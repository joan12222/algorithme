#include<bits/stdc++.h>
using namespace std;
int n,a[100005],bucket[100005]={0},num_of_dif[100005]={0},flag[100005]={0},ans=0; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		memset(bucket,0,sizeof(bucket));
		for(int j=i+1;j<=n;j++){
			bucket[a[j]]++;
		}
		for(int j=1;j<=100000;j++){
			if(bucket[j]!=0){
				num_of_dif[i]++;
			}
		}
	}
	for(int i=1;i<=n-1;i++){
		cout<<num_of_dif[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<=n-1;i++){
		if(flag[a[i]]==0){
			flag[a[i]]=1;
			ans+=num_of_dif[i];
		}
	}
	cout<<ans;
	return 0;
}
