#include<bits/stdc++.h>
using namespace std;
int n,m,p[100005],c[100005],q[100005],ans=0;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i]>>c[i];
	}
	int head=1,tail=1;
	for(int i=1;i<=n;i++){
		q[tail]=p[i];
		tail++;
		while(tail-head>m+1){
			head++;
		}
		while(head!=tail&&c[i]>0){
			if(q[head]>c[i]){
				q[head]-=c[i];
				ans+=c[i];
				c[i]=0;
			}else{
				c[i]-=q[head];
				ans+=q[head];
				q[head]=0;
				head++;
			}
		}
	}
	cout<<ans;
	return 0;
}