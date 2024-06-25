#include<bits/stdc++.h>
using namespace std;
int w,n,pi[30001];
int main(){
	scanf("%d%d",&w,&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&pi[i]);
	}
	sort(pi,pi+n+1);
	int ans=0,start=1,finish=n;
	while(start<=finish){
		if(pi[start]+pi[finish]<=w){
			ans++;
			start++;
			finish--;
		}else{
			ans++;
			finish--;
		}
	}
	cout<<ans;
	return 0;
}