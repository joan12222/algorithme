#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],x[10005];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&x[i]);
	}
	a[n+1]=INT_MAX;
	bool flag,nonExist;
	for(int i=1;i<=m;i++){
		flag=true;
		nonExist=true;
		for(int j=1;j<=n;j++){
			if(a[j]==x[i]&&flag){
				flag=false;
				nonExist=false;
				printf("%d ",j);
			}
			if(a[j+1]!=x[i]&&flag==false){
				printf("%d\n",j);
				break;
			}
		}
		
		if(nonExist){
			printf("-1 -1\n");
		}
	}
	return 0;
}