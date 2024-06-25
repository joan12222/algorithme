#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,minn=99999;
	cin>>n;
	for(int i=0;i<=sqrt(n);i++){
		for(int j=0;j<=sqrt(n-i*i);j++){
			for(int k=0;k<=sqrt(n-i*i-j*j);k++){
				int l=sqrt(n-i*i-j*j-k*k);
				if(i*i+k*k+j*j+l*l==n&&i+j+k+l<minn){
					minn=i+k+j+l;
				}
			}
		}
	}
	cout<<minn;
	return 0;
}