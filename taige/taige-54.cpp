#include<bits/stdc++.h>
using namespace std;
int n,m,r,c,a[20][20],rol[20],col[20],cnt=0,ans=INT_MAX;
void dfsc(int x){
	if(x==c+1){
		/*
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				cout<<a[rol[i]][col[j]]<<" ";
			}
			cout<<endl;
		}
		*/
		cnt=0;
		for(int i=1;i<=r;i++){
			for(int j=2;j<=c;j++){
				cnt+=abs(a[rol[i]][col[j-1]]-a[rol[i]][col[j]]);
				if(cnt>=ans) return;
			}
		}
		for(int i=1;i<=c;i++){
			for(int j=2;j<=r;j++){
				cnt+=abs(a[rol[j]][col[i]]-a[rol[j-1]][col[i]]);
				if(cnt>=ans) return;
			}
		}
		//cout<<cnt;
		//cout<<endl;
		ans=min(ans,cnt);
		return;
	}
	for(int i=1;i<=m;i++){
		if(x==1||col[x-1]<i){
			col[x]=i;
			dfsc(x+1);
		}
	}
}
void dfsr(int k){
	if(k==r+1){
		dfsc(1);
		return;
	}
	for(int i=1;i<=n;i++){
		if(k==1||rol[k-1]<i){
			rol[k]=i;
			dfsr(k+1);
		}
	}
}
int main(){
	freopen("submatrix.in","r",stdin);
	freopen("submatrix.out","w",stdout);
	cin>>n>>m>>r>>c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	dfsr(1);
	cout<<ans;
	return 0;
}