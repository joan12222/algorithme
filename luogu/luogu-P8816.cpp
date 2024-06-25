#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
struct Node{
	int x,y;
}a[505];
ll dp[505][105];
bool cmp(Node a,Node b){
	if(a.x==b.x) return a.y<b.y;
	else return a.x<b.x;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].y;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++) dp[i][k]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=k;j++){
			for(int l=1;l<i;l++){
				if(a[l].x>a[i].x||a[l].y>a[i].y) continue;
				int num=a[i].x-a[l].x+a[i].y-a[l].y-1;
				if(num+j>k) continue;
				dp[i][j]=max(dp[i][j],dp[l][j+num]+num+1);	
			}
		}
	}
	ll ans=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=k;j++) ans=max(ans,j+dp[i][j]);
	}
	cout<<ans;
	return 0;
} 
