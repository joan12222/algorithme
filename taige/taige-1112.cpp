#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,d,cnt,vis[15]={0};
string s;
char ans[15];
bool bucket[3628805]={0};
void dfs(int k){
	if(k==s.size()){
		long long num=atoll(ans);
		if(!bucket[num]){
			bucket[num]=1;
			if(num%d==0){
				cnt++;
			}
		}
		return;
	}
	for(int i=0;i<s.size();i++){
		if(vis[i]==0){
			vis[i]=1;
			ans[k]=s[i];
			dfs(k+1);
			ans[k]='\0';
			vis[i]=0;
		}
	}
}
int main(){
	freopen("create.in","r",stdin);
	freopen("create.out","w",stdout);
	cin>>t;
	while(t--){
		cnt=0;
		memset(ans,'\0',sizeof(ans));
		memset(vis,0,sizeof(vis));
		memset(bucket,0,sizeof(bucket));
		cin>>s>>d;
		dfs(0);
		cout<<cnt<<endl;
	}
	return 0;
}
