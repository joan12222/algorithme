#include<bits/stdc++.h>
using namespace std;
int k,m;
int good_bad_die[35];//1=good 2=bad 0=dead
bool check(){
	for(int i=k+1;i<=2*k;i++){
		if(good_bad_die[i]!=0) return false;
	}
	return true;
}
bool joseph(){
	for(int i=1;i<=k;i++) good_bad_die[i]=1;
	for(int i=k+1;i<=2*k;i++) good_bad_die[i]=2;
	int i=0,dead=0,cnt=0;
	while(dead<2*k){
		i=(i+1)%(2*k);
		if(good_bad_die[i]==0) continue;
		cnt++;
		if(cnt==m){
			if(good_bad_die[i]==1) return check();
			else{
				dead++;
				good_bad_die[i]=0;
				cnt=0;
			}
		}
	}
	return false;
}
int main(){
	cin>>k;
	for(m=1;;m++){
		if(joseph()){
			cout<<m;
			return 0;
		}
	}	
	return 0;
}
