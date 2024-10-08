#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,a[5005],cnt[5005],f[5005],maxx;
int main(){
	cin>>t;
	while(t--){
		memset(cnt,0,sizeof(cnt));
		memset(f,0,sizeof(f));
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i],cnt[a[i]]++;
		vector<int> v;
		for(int i=1;i<=5000;i++){
			if(cnt[i]) v.push_back(cnt[i]);
		}
		for(int i=1;i<v.size();i++){
			for(int j=i;j>=v[i];j--) f[j+1]=max(f[j+1],f[j-v[i]]+1);
		}
		maxx=0;
		for(int i=1;i<=n;i++) maxx=max(maxx,f[i]);
		cout<<v.size()-maxx<<endl;
	}
	return 0;
}
