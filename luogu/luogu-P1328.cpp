#include<bits/stdc++.h>
using namespace std;
int n,numa,numb,a[205],b[205];
int main(){
	cin>>n>>numa>>numb;
	for(int i=0;i<numa;i++) cin>>a[i];
	for(int i=0;i<numb;i++) cin>>b[i];
	int nowa=-1,nowb=-1;
	int ansa=0,ansb=0;
	while(n--){
		nowa=(nowa+1)%numa;
		nowb=(nowb+1)%numb;
		if(a[nowa]==0){
			if(b[nowb]==2||b[nowb]==3) ansa++;
			else if(b[nowb]==1||b[nowb]==4) ansb++;
		}else if(a[nowa]==1){
			if(b[nowb]==0||b[nowb]==3) ansa++;
			else if(b[nowb]==2||b[nowb]==4) ansb++;
		}else if(a[nowa]==2){
			if(b[nowb]==0||b[nowb]==4) ansa++;
			else if(b[nowb]==1||b[nowb]==3) ansb++;
		}else if(a[nowa]==3){
			if(b[nowb]==2||b[nowb]==4) ansa++;
			else if(b[nowb]==0||b[nowb]==1) ansb++;
		}else if(a[nowa]==4){
			if(b[nowb]==2||b[nowb]==3) ansa++;
			else if(b[nowb]==0||b[nowb]==1) ansb++;
		}
	}
	cout<<ansa<<" "<<ansb;
	return 0;
}
