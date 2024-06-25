#include<bits/stdc++.h>
using namespace std;
int n,m,k,c[200005],bucket[200005],full,box[200005],num[200005],ans;
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		bucket[c[i]]++;
	}
	int begin=1,end=1;
	for(int i=1;i<=n;i++){
		if(num[c[i]]%k==0){
			full++;
			box[c[i]]++;
		}
		num[c[i]]++;
		if(full==m){
			end=i;
			break;
		}
	}
	for(int i=1;i<=n;i++) ans+=min(box[i]*k,bucket[i]);
	cout<<ans<<endl;
	for(int i=1;i<n;i++){
		num[c[begin]]--;
		if(num[c[begin]]%k==0){
			ans-=min(box[c[begin]]*k,bucket[c[begin]]);
			full--;
			box[c[begin]]--;
			ans+=min(box[c[begin]]*k,bucket[c[begin]]);
		}
		bool flag=false;
		if(begin==end) flag=true;
		while(full!=m&&(begin!=end||flag)){
			if(end==n-1) end=n;
			else end=(end+1)%n;
			flag=false;
			if(num[c[end]]%k==0){
				ans-=min(box[c[end]]*k,bucket[c[end]]);
				full++;
				box[c[end]]++;
				ans+=min(box[c[end]]*k,bucket[c[end]]);
			}
			num[c[end]]++;
		}
		begin++;
		cout<<ans<<endl;
	}
	return 0;
}
