#include<bits/stdc++.h>
using namespace std;
int h,w,n,a[105][105],x=1,y=1,dir=1;//0 °×
//1 ÉÏ 2 ÓÒ 3 ÏÂ 4 ×ó 
int main(){
	cin>>h>>w>>n;
	while(n--){
		if(a[x][y]==0){
			a[x][y]=1;
			dir++;
			if(dir>4) dir=1;
		}else{
			a[x][y]=0;
			dir--;
			if(dir<1) dir=4;
		}
		if(dir==1){
			x--;
			if(x<1) x=h;
		}
		if(dir==2){
			y++;
			if(y>w) y=1;
		}
		if(dir==3){
			x++;
			if(x>h) x=1;
		}
		if(dir==4){
			y--;
			if(y<1) y=w;
		}
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(a[i][j]==1) cout<<"#";
			else cout<<".";
		}
		cout<<endl;
	}
	return 0;
}
