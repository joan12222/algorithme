#include<bits/stdc++.h>
using namespace std;
int w,x,h,q;
int vis[25][25][25]={0};
int xone,yone,zone,xtwo,ytwo,ztwo;
int main(){
	cin>>w>>x>>h>>q;
	int total=w*x*h;
	while(q--){
		cin>>xone>>yone>>zone>>xtwo>>ytwo>>ztwo;
		for(int i=xone;i<=xtwo;i++)
			for(int j=yone;j<=ytwo;j++)
				for(int k=zone;k<=ztwo;k++)
					if(vis[i][j][k]==0){
						vis[i][j][k]=1;
						total--;
					}
	}
	cout<<total;
	return 0;
} 
