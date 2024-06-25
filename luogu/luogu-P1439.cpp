#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100005],b[100005],f[100005],op[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		op[a[i]]=i;
	}
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) f[i]=0x3f3f3f3f;
	int len=0;
	f[0]=0;
	for(int i=1;i<=n;i++){
		int left=0,right=len;
		if(op[b[i]]>f[len]) f[++len]=op[b[i]];
		else{
			while(left<right){
				int mid=(left+right)/2;
				if(f[mid]>op[b[i]]) right=mid;
				else left=mid+1;
			}
			f[left]=min(op[b[i]],f[left]);
		}
	}
	cout<<len;
	return 0;
}
