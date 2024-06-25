#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int n,m;
int can_obtain[200005];
int need_open[200005];
int ind=1;
ll open_num=0;
ll f[200005][200005];
int main(){
	int op;
	ll num;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>op;
		if(op==1){
			cin>>num;
			can_obtain[ind]=num;
			need_open[ind]=0;
			ind++;
		}else if(op==2){
			cin>>num;
			can_obtain[ind]=num;
			need_open[ind]=1;
			ind++;
		}else{
			cin>>num;
			open_num+=num;
		}
	}
	for(int i=1;i<=n;i++) f[i][0]=INF;
	for(int i=1;i<=m;i++) f[0][i]=INF;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(need_open[i]==0){
				f[i][j]=max(f[i-1][j],f[i-1][j-1]+can_obtain[i]);
			}else{
				if(open_num>0){
					f[i][j]=max(f[i-1][j],f[i-1][j-1]+can_obtain[i]);
					open_num--;
				}
				else f[i][j]=f[i-1][j];
			}
		}
	}
	cout<<f[n][m];
	return 0;
} 
