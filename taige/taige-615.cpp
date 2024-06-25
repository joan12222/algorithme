#include<bits/stdc++.h>
using namespace std;
int r[15],c[15];
int n,cnt,k;
int check(int id){
	for(int i=1;i<id;i++){
		if(r[id]==r[i]){
			return 0;
		}else if(c[id]==c[i]){
			return 0;
		}else if(abs(r[id]-r[i])==abs(c[id]-c[i])){
			return 0;
		}
	}
	return 1;
}
bool flag=false;
void dfs(int id){
	if(id==n+1){
		cnt++;
		if(cnt==k){
			flag=true;
			for(int i=1;i<=n;i++){
				cout<<c[i]<<" ";
			}
		}
		return;
	}
	for(int i=1;i<=n;i++){
		r[id]=id;
		c[id]=i;
		if(check(id)==0){
			continue;
		}
		dfs(id+1);
		if(flag){
			return;
		}
	}
}
int main(){
	//freopen("queen.in","r",stdin);
	//freopen("queen.out","w",stdout);
	cin>>n>>k;
	dfs(1);
	if(flag==false){
		cout<<"-1";
	}
	return 0;
}