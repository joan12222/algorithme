#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k,f[2505][2505];
struct Node{
	ll num,idx;
}a[2505];
bool cmp(Node x,Node y){
	return x.num>y.num;
}
int main(){
	memset(f,0x3f,sizeof(f));
	cin>>n>>m>>k;
	a[1].num=0x3f3f3f3f;
	for(int i=2;i<=n;i++){
		cin>>a[i].num;
		a[i].idx=i;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		f[x][y]=1;
		f[y][x]=1;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) f[i][j]=0;
				f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<f[i][j]<<" ";
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				for(int w=1;w<=n;w++){
					if(i==j||i==k||i==w||j==k||j==w||k==w) continue;
					ll dis1=f[1][a[i].idx];
					ll dis2=f[a[i].idx][a[j].idx];
					ll dis3=f[a[j].idx][a[k].idx];
					ll dis4=f[a[k].idx][a[w].idx];
					ll dis5=f[a[w].idx][1];
					if(dis1<=k&&dis2<=k&&dis3<=k&&dis4<=k&&dis5<=k){
						cout<<a[i].num+a[j].num+a[k].num+a[w].num;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
