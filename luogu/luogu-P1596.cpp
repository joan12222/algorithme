#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
int qx[10000];
int qy[10000];
void floodfill(int i,int j){
	qx[0]=i;
	qy[0]=j;
	int head=0;
	int tail=1;
	a[i][j]='.';
	int dx[8]={1,1,1,0,0,-1,-1,-1};
	int dy[8]={1,-1,0,-1,1,-1,1,0};
	while(head<tail){
		for(int k=0;k<8;k++){
			int x=qx[head]+dx[k];
			int y=qy[head]+dy[k];
			if(x>=0&&x<n&&y>=0&&y<m){
				if(a[x][y]=='W'){
					a[x][y]='.';
					qx[tail]=x;
					qy[tail]=y;
					tail++;
				}
			}
		}
		//end for
		head++;
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a[i][j];
	}
	int lake=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='W'){
				lake++;
				floodfill(i,j);
			}
		}
	}
	cout<<lake;
	return 0;
}
