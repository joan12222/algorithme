#include<bits/stdc++.h>
using namespace std;
int n,k;
long long a[2505][2505]={0};
int main(){
    scanf("%d%d",&n,&k);
    long long maxx=-1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		int x;
    		scanf("%d",&x);
    		a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+x;
    	}
	}
    for(int i=k;i<=n;i++){
    	for(int j=k;j<=n;j++){
    		long long num=a[i][j]-a[i][j-k]-a[i-k][j]+a[i-k][j-k];
    		maxx=max(maxx,num);
    	}
	}
	printf("%lld",maxx);
    return 0;
}

