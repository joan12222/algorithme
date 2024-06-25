#include<bits/stdc++.h>
using namespace std;
char a[15][15];
bool flag=true;
int farmer_sx,farmer_sy,cow_sx,cow_sy;
void dfs(int farmerx,int farmery,int farmerdir,int cowx,int cowy,int cowdir,int step){
	if(farmerx==cowx&&farmery==cowy){
		flag=false;
		cout<<step;
		return;
	}
	int now_farmerx,now_farmery,now_farmerdir,now_cowx,now_cowy,now_cowdir;
	if(farmerdir==0){
		if(a[farmerx-1][farmery]!='#'){
			now_farmerx=farmerx-1;
			now_farmery=farmery;
			now_farmerdir=farmerdir;
		}else{
			now_farmerx=farmerx;
			now_farmery=farmery;
			now_farmerdir=1;
		}
	}else if(farmerdir==1){
		if(a[farmerx][farmery+1]!='#'){
			now_farmerx=farmerx;
			now_farmery=farmery+1;
			now_farmerdir=farmerdir;
		}else{
			now_farmerx=farmerx;
			now_farmery=farmery;
			now_farmerdir=2;
		}
	}else if(farmerdir==2){
		if(a[farmerx+1][farmery]!='#'){
			now_farmerx=farmerx+1;
			now_farmery=farmery;
			now_farmerdir=farmerdir;
		}else{
			now_farmerx=farmerx;
			now_farmery=farmery;
			now_farmerdir=3;
		}
	}else{
		if(a[farmerx][farmery-1]!='#'){
			now_farmerx=farmerx;
			now_farmery=farmery-1;
			now_farmerdir=farmerdir;
		}else{
			now_farmerx=farmerx;
			now_farmery=farmery;
			now_farmerdir=0;
		}
	}
	
	if(cowdir==0){
		if(a[cowx-1][cowy]!='#'){
			now_cowx=cowx-1;
			now_cowy=cowy;
			now_cowdir=cowdir;
		}else{
			now_cowx=cowx;
			now_cowy=cowy;
			now_cowdir=1;
		}
	}else if(cowdir==1){
		if(a[cowx][cowy+1]!='#'){
			now_cowx=cowx;
			now_cowy=cowy+1;
			now_cowdir=cowdir;
		}else{
			now_cowx=cowx;
			now_cowy=cowy;
			now_cowdir=2;
		}
	}else if(cowdir==2){
		if(a[cowx+1][cowy]!='#'){
			now_cowx=cowx+1;
			now_cowy=cowy;
			now_cowdir=cowdir;
		}else{
			now_cowx=cowx;
			now_cowy=cowy;
			now_cowdir=3;
		}
	}else{
		if(a[cowx][cowy-1]!='#'){
			now_cowx=cowx;
			now_cowy=cowy-1;
			now_cowdir=cowdir;
		}else{
			now_cowx=cowx;
			now_cowy=cowy;
			now_cowdir=0;
		}
	}
	dfs(now_farmerx,now_farmery,now_farmerdir,now_cowx,now_cowy,now_cowdir,step+1);
}
int main(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cin>>a[i][j];
			if(a[i][j]=='F'){
				farmer_sx=i;
				farmer_sy=j;
			}
			if(a[i][j]=='C'){
				cow_sx=i;
				cow_sy=j;
			}
		}
	}
	dfs(farmer_sx,farmer_sy,0,cow_sx,cow_sy,0,0);
	if(flag) cout<<"-1";
	return 0;
}
