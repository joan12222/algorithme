#include<bits/stdc++.h>
using namespace std;
int n,a[200005],b[200005],win;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	int ti=1,tj=n,qi=1,qj=n;
	while(n--){
		if(a[tj]>b[qj]){
			win++;
			tj--;
			qj--;
		}else if(a[ti]>b[qi]){
			win++;
			ti++;
			qi++;
		}else if(a[ti]<b[qj]){
			win--;
			ti++;
			qj--;
		}
	}
	cout<<win;
	return 0;
}
