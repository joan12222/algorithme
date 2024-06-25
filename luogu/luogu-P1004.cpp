#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[15][15]={0},f[25][15][15]={0};
int main(){
	cin>>n;
	int x,y,z;
	while(cin>>x>>y>>z&&(x!=0||y!=0||z!=0)) a[x][y]=z;
	f[0][1][1]=a[1][1];
	
	for(int i=1;i<=2*n-2;i++){
		for(int xone=1;xone<=n;xone++){
			for(int xtwo=1;xtwo<=n;xtwo++){
				int yone=i-xone+2;
				int ytwo=i-xtwo+2;
				if(yone<1||ytwo<1) continue;
				f[i][xone][xtwo]=max(f[i-1][xone][xtwo],max(f[i-1][xone-1][xtwo-1],
					max(f[i-1][xone][xtwo-1],f[i-1][xone-1][xtwo])))+
					a[xone][yone]+a[xtwo][ytwo];
				if(xone==xtwo&&yone==ytwo) f[i][xone][xtwo]-=a[xone][yone];
				//cout<<"f("<<i<<","<<xone<<","<<xtwo<<")="<<f[i][xone][xtwo]<<endl;
			}
		}
	}
	cout<<f[2*n-2][n][n];
	return 0;
}
