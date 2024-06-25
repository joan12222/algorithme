#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll f[35][35][35][35][35];
int main(){
	while(cin>>n&&n){
		int a[10]={0};
		for(int i=1;i<=n;i++) cin>>a[i];
		f[0][0][0][0][0]=1;
		for(int i=0;i<=a[1];i++){
			for(int j=0;j<=min(a[2],i);j++){
				for(int k=0;k<=min(a[3],j);k++){
					for(int w=0;w<=min(a[4],k);w++){
						for(int l=0;l<=min(a[5],w);l++){
							if(i||j||k||l||w) f[i][j][k][w][l]=0;
							f[i][j][k][w][l]+=((i&&i>j)?f[i-1][j][k][w][l]:0)+((j&&j>k)?f[i][j-1][k][w][l]:0)+((k&&k>w)?f[i][j][k-1][w][l]:0)+((w&&w>l)?f[i][j][k][w-1][l]:0)+(l?f[i][j][k][w][l-1]:0);
						}
					}
				}
			}
		}
		cout<<f[a[1]][a[2]][a[3]][a[4]][a[5]]<<endl;
	}
	return 0;
}
