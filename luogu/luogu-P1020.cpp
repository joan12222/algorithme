#include<bits/stdc++.h>
using namespace std;
int a[100005],n,f[100005],len=1;
int main(){
	while(cin>>a[n]) n++;
	n--;
	f[len]=a[0];
	for(int i=1;i<=n;i++){
		if(a[i]<=f[len]) f[++len]=a[i];
		else{
			int pos=upper_bound(f+1,f+len+1,a[i],greater<int>())-f; 
			f[pos]=a[i];
		}
	}
	cout<<len<<endl;
	len=1;
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){
		if(a[i]>f[len]) f[++len]=a[i];
		else{
			int pos=lower_bound(f+1,f+len+1,a[i])-f; 
			f[pos]=a[i];
		}
	}
	cout<<len-1;
	return 0;
}
