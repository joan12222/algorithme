#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n,a[10001],ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ans++;
			}
		}
	}
	cout<<ans;
    return 0;
}
