#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,s;
	scanf("%d %d", &n, &s);
	vector<vector<int>> a = vector<vector<int>>(n+1, vector<int>(3, 0));
	for(int i=1; i<=n; i++) {
		scanf("%d %d", &a[i][1], &a[i][2]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j][2]>a[j+1][2]){
				swap(a[j][1],a[j+1][1]);
				swap(a[j][2],a[j+1][2]);
			}
		}
	}
	int ans=0,num;
	for(int i=1;i<=n;i++){
		if(a[i][1]*a[i][2]<=s){
			ans+=a[i][1];
			s-=a[i][1]*a[i][2];
		}else{
			num=s/a[i][2];
			ans+=num;
			cout<<ans;
			return 0;
		}
	}
	return 0;
}