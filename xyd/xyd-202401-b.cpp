#include<bits/stdc++.h>
using namespace std;
int n,l,a,b,v[1005][15],is_win,all_win,can_win,ans;
string s;
int main(){
	cin>>n>>l>>a>>b;
	for(int i=1;i<=n;i++){
		for(int j=0;j<l;j++){
			cin>>s;
			if(s[0]=='A') v[i][j]=1;
			else v[i][j]=0;
		}
	}
	for(int i=1;i<(1<<l);i++){
		can_win=0;
		for(int j=1;j<=n;j++){
			int numa=b,numn=a;
			for(int k=0;k<l;k++){
				int now=(i>>k)&1;
				if(now==1&&v[j][k]==1) numn--;
				else if(now==0&&v[j][k]==0) numa=numa;
				else numa--;
				if(numn==0){
					can_win++;
					break;
				}
				if(numa==0) break;
			}
		}
		if(can_win==n){
			all_win=1;
			ans=i;
			break;
		}
		if(can_win!=0){
			is_win=1;
			ans=i;
		}
	}
	if(all_win==1){
		cout<<"So Easy"<<endl;
		for(int i=0;i<l;i++){
			int now=(ans>>i)&1;
			if(now==1) cout<<"Attack ";
			else cout<<"Parry ";
		}
	}else if(is_win==1){
		cout<<"Hardly win"<<endl;
		for(int i=0;i<l;i++){
			int now=(ans>>i)&1;
			if(now==1) cout<<"Attack ";
			else cout<<"Parry ";
		}
	}else cout<<"Doomed to Die";
	return 0;
}
