#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,m,k,a[505][505];
char c[505][505];
ll sum0,sum1,mns,pre[505][505],dv;
ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) cin>>a[i][j];
		}
		sum0=0,sum1=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>c[i][j];
				if(c[i][j]=='0') sum0+=a[i][j];
				else sum1+=a[i][j];
			}
		}
		mns=abs(sum0-sum1);
		if(mns==0){
			cout<<"Yes"<<endl;
			continue;
		}
		//cout<<mns<<endl;
		memset(pre,0,sizeof(pre));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+c[i][j]-'0';
		}
		bool flag=false;
		dv=0;
		for(int i=1;i<=n-k+1;i++){
			for(int j=1;j<=m-k+1;j++){
				ll tmp=abs(k*k-2*(pre[i+k-1][j+k-1]-pre[i-1][j+k-1]-pre[i+k-1][j-1]+pre[i-1][j-1]));
				//cout<<i<<" "<<j<<" "<<i+k-1<<" "<<j+k-1<<" "<<tmp<<endl;
				if(tmp==0) continue;
				if(dv==0) dv=tmp;
				else dv=gcd(dv,tmp);
				if(mns%dv==0){
					flag=true;
					break;
				}
			}
			if(flag) break;
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
