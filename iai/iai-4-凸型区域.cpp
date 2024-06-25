#include<bits/stdc++.h>
using namespace std;
int n,d[100005],u[100005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>u[i];
    for(int i=1;i<=n;i++) cin>>d[i];
    long long p1=-1e5,p2=-1e5,p3=-1e5;
    long long best=-1e5;
    for(int i=1;i<=n;i++){
    	p3=max(p2,p3)+d[i];
    	p2=max(p2,p1)+u[i]+d[i];
    	p1=max(p1,0LL)+d[i];
    	best=max(best,p3);
	}
	cout<<best;
    return 0;
}
