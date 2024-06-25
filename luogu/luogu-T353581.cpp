#include<bits/stdc++.h>
using namespace std;
int n,m,b[500005];
int a[500005];
int bucket[5000005]={0};
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
		bucket[b[i]]++;
	}
	int last=0,ans=0;
	for(int i=1;i<=n;i++){
		if(bucket[a[i]]){
			if(i>last+1) ans++;
			last=i;
		}
	}
	if(last!=n) ans++;
	printf("%d",ans);
	return 0;
}
