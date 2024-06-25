#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int minn=a[1];
	int maxn;
	// 1 3 2
	for(int i=2;i<=n;i++){
		if(a[i-1]<=a[i]){
//			minn=min(a[i-1],minn);
			minn=min(a[i],minn);
		}else{
			if(i!=n) {
				maxn=a[i+1];
				for(int k=i+1;k<=n;k++){
					if(a[k-1]>a[k]){
						cout<<"-1";
						return 0;
					}
	//				maxn=max(a[k-1],maxn);
					maxn=max(a[k],maxn);
				}
			} else {
				maxn=a[i];
			}
//			cout<<maxn<<" "<<minn<<endl;
			if(maxn>minn){
				cout<<"-1";
				return 0;
			}
			cout<<n-i+1;
			return 0;
		}
	}
	cout<<"0";
	return 0;
}