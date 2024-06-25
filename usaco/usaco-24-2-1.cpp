#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,id[200005];
string s;
ll add[200005],a[200005],ans;
int main(){
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) id[i]=i;
	id[0]=n;
	id[n+1]=1;
	int i1;
	for(int i=0;i<n;i=i1){
		//if(i!=n-1&&s[i]!=s[i+1]) i1=i+2;
		if(s[i]=='L'){
			add[id[i]]++;
			add[id[i+1]]--;
			i1=i+1;
		}else{
			add[id[i+2]]++;
			add[id[i+1]]--;
			i1=i+1;
		}
	}
	//for(int i=1;i<=n;i++) cout<<add[i]<<" ";
	//cout<<endl;
	for(int i=1;i<=n;i++) add[i]*=m;
	for(int i=1;i<=n;i++){
		if(add[i]+a[i]<0){
			if(s[i-1]=='L') add[id[i-1]]-=abs(add[i])-a[i];
			else add[id[i+1]]-=abs(add[i])-a[i];
			add[i]=-a[i];
		}
	}
	for(int i=1;i<=n;i++) ans+=min(a[i]+add[i],a[i]);
	cout<<ans;
	return 0;
}
