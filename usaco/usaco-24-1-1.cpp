#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005],cnt[200005],if_can[200005]={0},last[200005];
bool if_all_diff(){
	for(int i=2;i<=n;i++){
		if(a[i]==a[i-1]) return false;
	}
	return true;
}
int calc(int x){
	if(x%2==0) return x/2;
	return x/2+1;
}
int main(){
	cin>>t;
	while(t--){
		memset(cnt,0,sizeof(cnt));
		memset(last,0,sizeof(last));
		memset(if_can,0,sizeof(if_can));
		cin>>n;
		if(n==2){
			int a,b;
			cin>>a>>b;
			if(a==b) cout<<a<<endl;
			else cout<<"-1"<<endl;
			continue;
		}
		if(n==3){
			int a,b,c;
			cin>>a>>b>>c;
			if(a!=b&&b!=c&&c!=a) cout<<"-1"<<endl;
			else if(a==b) cout<<a<<endl;
			else if(b==c) cout<<b<<endl;
			else cout<<c<<endl;
			continue;
		}
		//for(int i=1;i<=n;i++) if_can[i]=1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			if(cnt[a[i]]==0) continue;
			if(last[a[i]]==0) last[a[i]]=i;
			else{
				if(i-last[a[i]]<3) if_can[a[i]]=1;
				last[a[i]]=i;
			}
		}
		//for(int i=1;i<=n;i++) cout<<if_can[i]<<" ";
		//cout<<endl;
		int j=1;
		while((if_can[j]==0||cnt[j]==0||cnt[j]==1)&&j<=n) j++;
		if(j>n){
			cout<<"-1"<<endl;
			continue;
		}
		cout<<j;
		for(int i=j+1;i<=n;i++){
			if(cnt[i]>0&&if_can[i]&&cnt[i]!=1) cout<<" "<<i;
		}
		cout<<endl;
		/*
		bool flag=false;
		int num=0;
		for(int i=1;i<=n;i++){
			if(cnt[i]>0){
				if(num==0) num=cnt[i];
				else{
					if(num!=cnt[i]){
						flag=true;
						break;
					}
				}
			}
		}
		if(flag==false&&if_all_diff()){
			cout<<"-1"<<endl;
			continue;
		}
		int maxx=0;
		for(int i=1;i<=n;i++) maxx=max(maxx,cnt[i]);
		vector<int> idx;
		for(int i=1;i<=n;i++){
			if(cnt[i]==maxx) idx.push_back(i);
		}
		cout<<idx[0];
		for(int i=1;i<idx.size();i++) cout<<" "<<idx[i];
		cout<<endl;
		*/
	}
	return 0;
}
