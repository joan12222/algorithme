#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[200005],mem[200005][4][4][4][4];
int dp(int k,int llast_south,int last_south,int llast_north,int last_north){
	if(k==n+1) return 0;
	if(mem[k][llast_south][last_south][llast_north][last_north]) return mem[k][llast_south][last_south][llast_north][last_north];
	bool vis_south[4]={0},vis_north[4]={0};
	vis_south[llast_south]=1;
	vis_south[last_south]=1;
	vis_south[a[k]]=1;
	vis_north[llast_north]=1;
	vis_north[last_north]=1;
	vis_north[a[k]]=1;
	int diff_south=0,diff_north=0;
	for(int i=1;i<=3;i++)
		if(vis_south[i]==1) diff_south++;
	for(int i=1;i<=3;i++)
		if(vis_north[i]==1) diff_north++;
	int south=dp(k+1,last_south,a[k],llast_north,last_north)+diff_south;
	int north=dp(k+1,llast_south,last_south,last_north,a[k])+diff_north;
	return mem[k][llast_south][last_south][llast_north][last_north]=max(south,north);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<dp(1,0,0,0,0);
	return 0;
} 
