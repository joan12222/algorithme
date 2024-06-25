#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[101][101];
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int cmax,rmin;
	for(int i=1;i<=n;i++){
		int maxn=-9999,minn=9999;
		for(int j=1;j<=n;j++){
			if(a[i][j]<minn){
				minn=a[i][j];
				rmin=j; // find out the minimum column in a row
			}
			if(a[j][i]>maxn){
				maxn=a[j][i];
				cmax=j;
			}
		}
//		cout<<a[i][rmin]<<" "<<a[cmax][i]<<endl;
		swap(a[i][rmin],a[cmax][i]);
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n-j;k++){
				if(a[i][k]>a[i][k+1]){
					swap(a[i][k],a[i][k+1]);
				}
			}
		}
		/*
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		*/
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}