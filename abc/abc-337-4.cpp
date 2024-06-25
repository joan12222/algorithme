#include<bits/stdc++.h>
using namespace std;
int h,w,k,ans;
char c;
vector<vector<int> > rx,ro,cx,co;
int main(){
	cin>>h>>w>>k;
	vector<int> tmp1(h+5);
	vector<int> tmp2(w+5);
	rx.resize(h+5,tmp2);
	ro.resize(h+5,tmp2);
	cx.resize(w+5,tmp1);
	co.resize(w+5,tmp1);
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>c;
			if(c=='x'){
				rx[i][j]=rx[i][j-1]+1;
				cx[j][i]=cx[j][i-1]+1;
			}else{
				rx[i][j]=rx[i][j-1];
				cx[j][i]=cx[j][i-1];
			}
			if(c=='o'){
				ro[i][j]=ro[i][j-1]+1;
				co[j][i]=co[j][i-1]+1;
			}else{
				ro[i][j]=ro[i][j-1];
				co[j][i]=co[j][i-1];
			}
		}
	}
	/*
	cout<<"co"<<" ";
	for(int i=1;i<=w;i++){
		for(int j=1;j<=h;j++) cout<<co[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	cout<<"cx"<<" ";
	for(int i=1;i<=w;i++){
		for(int j=1;j<=h;j++) cout<<cx[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	cout<<"ro"<<" ";
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cout<<ro[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	cout<<"rx"<<" ";
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cout<<rx[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	*/
	ans=2e9;
	if(k<=h){
		for(int j=1;j<=w;j++){
			for(int i=1;i<=h-k+1;i++){
				if(cx[j][i+k-1]-cx[j][i-1]!=0) continue;
				if(k-co[j][i+k-1]+co[j][i-1]<0) continue;
				ans=min(ans,k-co[j][i+k-1]+co[j][i-1]);
			}
		}
	}
	if(k<=w){
		for(int j=1;j<=h;j++){
			for(int i=1;i<=w-k+1;i++){
				if(rx[j][i+k-1]-rx[j][i-1]!=0) continue;
				if(k-ro[j][i+k-1]+ro[j][i-1]<0) continue;
				ans=min(ans,k-ro[j][i+k-1]+ro[j][i-1]);
			}
		}
	}
	if(ans==2e9) cout<<"-1";
	else cout<<ans;
	return 0;
}
