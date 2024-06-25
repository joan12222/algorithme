#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005],c[1005],ans1,ans2;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i];
	for(int i=1;i<=n;i++){
		ans1=0;
		ans2=0;
		for(int j=1;j<=n;j++){
			if(a[j]<a[i]&&b[j]<b[i]&&c[j]>b[i]){
				if(a[ans1]<a[j]) ans1=j;
			}
			if(a[j]<a[i]&&c[j]>c[i]&&b[j]<c[i]){
				if(a[ans2]<a[j]) ans2=j;
			}
		}
		cout<<ans1<<" "<<ans2<<endl;
	}	
	return 0;
}
