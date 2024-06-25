#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,0,1,-1};
int dy[]={0,1,-1,0,0};
char c[10][10],c1[10][10];
int ans=2e9,res,t;
void turn(int i,int j){
	for(int k=0;k<5;k++){
		int nx=i+dx[k];
		int ny=j+dy[k];
		if(nx>=0&&nx<5&&ny>=0&&ny<5) c1[nx][ny]=(c1[nx][ny]=='1'?'0':'1');
	}
}
int main(){
	cin>>t;
	while(t--){
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++) cin>>c[i][j];
		}
		ans=2e9;
		for(int i=0;i<32;i++){
			res=0;
			memcpy(c1,c,sizeof(c1));
			for(int j=0;j<5;j++){
				if(i<<j&1){
					res++;
					turn(0,j);
				}
			}
			for(int j=0;j<4;j++){
				for(int k=0;k<5;k++){
					if(c1[j][k]=='0'){
						res++;
						turn(j+1,k);
					}
				}
			}
			bool flag=true;
			for(int j=0;j<5;j++){
				if(c1[4][j]=='0'){
					flag=false;
					break;
				}
			}
			if(flag) ans=min(ans,res);
			memcpy(c,c1,sizeof(c));
		}
		if(ans>6) cout<<"-1"<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
