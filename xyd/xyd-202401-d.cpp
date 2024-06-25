#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100005],b[100005],c[100005],use[100005],m,v,now;
ll f[1005][1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m>>v;
	use[1]=a[1];
	b[1]=1;
	now=1;
	for(int i=2;i<=n;i++){
		int left=1,right=now;
		while(left<right){
			int mid=(left+right+1)/2;
			if(use[mid]<=a[i]) left=mid;
			else right=mid-1;
		}
		if(use[left]>a[i]){
			use[left]=a[i];
			b[i]=1;
		}else{
			if(left==now){
				use[++now]=a[i];
				b[i]=now;
			}else{
				use[left+1]=a[i];
				b[i]=left+1;
			}
		}
	}
	now=1;
	use[1]=a[n];
	c[n]=1;
	for(int i=n-1;i>=1;i--){
		int left=1,right=now;
		while(left<right){
			int mid=(left+right+1)/2;
			if(use[mid]<=a[i]) left=mid;
			else right=mid-1;
		}
		if(use[left]>a[i]){
			use[left]=a[i];
			c[i]=1;
		}else{
			if(left==now){
				use[++now]=a[i];
				c[i]=now;
			}else{
				use[left+1]=a[i];
				c[i]=left+1;
			}
		}
	}
	//for(int i=1;i<=n;i++) cout<<b[i]<<" "<<c[i]<<endl;
	memset(f,0x3f,sizeof(f));
	f[0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=m;j>=0;j--){
			for(int k=v;k>=0;k--) f[j][k]=min(f[j][k],f[max(j-b[i],0)][max(k-c[i],0)]+a[i]);
		}
	}
	cout<<f[m][v];
	return 0;
}
