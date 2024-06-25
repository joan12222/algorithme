#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
struct Node{
	int ind,val;
};
*/
int n,num=0;
int pow2[35];
int a[100005];
map<int,int> h;
int main(){
	pow2[1]=2;
	for(int i=2;i<=30;i++) pow2[i]=pow2[i-1]*2;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=30;j++){
			if(a[i]+a[i]==pow2[j]){
				num++;
				break;
			}
		}
		h[a[i]]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=30;j>=1;j--){
			if(pow2[j]-a[i]<=0) break;
			if(h.find(pow2[j]-a[i])!=h.end()) ans+=h[pow2[j]-a[i]];
		}
	}
	cout<<ans<<" "<<num<<endl;
	cout<<(ans-num)/2;
	return 0;
}
