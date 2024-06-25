#include<iostream>
using namespace std;
int h,w,q,x1,x2,y1,y2,a[505][505],sum1[505][505],sum2[505][505],ans;//ºá Êú
int main(){
	cin>>h>>w;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			char c;
			cin>>c;
			if(c=='.') a[i][j]=1;
			else a[i][j]=0;
		}
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(a[i][j]==1&&a[i][j-1]==1) sum1[i][j]=sum1[i][j-1]+1;
			else sum1[i][j]=sum1[i][j-1];
		}
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=h;j++){
			if(a[j][i]==1&&a[j-1][i]==1) sum2[j][i]=sum2[j-1][i]+1;
			else sum2[j][i]=sum2[j-1][i];
		}
	}
	cin>>q;
	/*
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cout<<sum1[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cout<<sum2[i][j]<<" ";
		cout<<endl;
	}
	*/
	while(q--){
		cin>>x1>>y1>>x2>>y2;
		ans=0;
		//if(x1!=x2){
			for(int i=x1;i<=x2;i++){
				//cout<<sum1[i][y2]<<" "<<sum1[i][y1]<<endl;
				ans+=sum1[i][y2]-sum1[i][y1];
			}
		//}
		//if(y1!=y2){
		//cout<<endl;
			for(int i=y1;i<=y2;i++){
				//cout<<sum2[x2][i]<<" "<<sum2[x1][i]<<endl;
				ans+=sum2[x2][i]-sum2[x1][i];
			}
		//}
		cout<<ans<<endl;
	}
	return 0;
}
