#include<bits/stdc++.h>
using namespace std;
string s[5][5];
int num[5][5];
int main(){
	//freopen("rope.in","r",stdin);
	//freopen("rope.out","w",stdout);
	cin>>s[1][0]>>s[2][0]>>s[3][0]>>s[1][1]>>s[2][1]>>s[3][1];
	int cnt=0;
	for(int i=1;i<=3;i++) if(s[i][0]!=s[i][1]) cnt++;
	if(cnt==0){
		for(int i=1;i<=3;i++){
			for(int j=i+1;j<=3;j++){
				int op;
				if(i==1&&j==2) op=1;
				if(i==1&&j==3) op=2;
				if(i==2&&j==3) op=3;
				if(s[op][0]=="true"&&s[op][1]=="true") num[j][i]=1;
				if(s[op][1]=="false"&&s[op][0]=="false") num[i][j]=-1;
			}
		}
		bool flag=false;
		for(int i=1;i<=3;i++){
			for(int j=1;j<=3;j++){
				if(i==j) continue;
				for(int k=1;k<=3;k++){
					if(i==k||j==k) continue;
					if(num[i][j]==num[j][k]&&num[i][j]==num[k][i]){
						flag=true;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) break;
		}
		if(flag) cout<<"7";
		else cout<<"8";
	}else{
		if(cnt==1) cout<<"6";
		if(cnt==2) cout<<"5";
		if(cnt==3) cout<<"4";
	}
	return 0;
}
