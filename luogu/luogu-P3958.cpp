/*数学过差
判断两个球是否相交（切）的公式：
如果两个球的半径之和>=两个球球心的距离，那么两球相交（切） 
*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,h,r,x[1005],y[1005],z[1005];;
int f[1005],bottom[1005],ceiling[1005];
int find1(int x){
	if(x==f[x]) return f[x];
	return f[x]=find1(f[x]);
}
ll calc_dis(ll xone,ll yone,ll zone,ll xtwo,ll ytwo,ll ztwo){
	return (xone-xtwo)*(xone-xtwo)+(yone-ytwo)*(yone-ytwo)+(zone-ztwo)*(zone-ztwo);
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>h>>r;
		int cnt1=0,cnt2=0;
		for(int i=1;i<=n;i++) f[i]=i;
		for(int i=1;i<=n;i++){
			cin>>x[i]>>y[i]>>z[i];
			if(x[i]+r>=h) ceiling[++cnt1]=i;
			if(z[i]-r<=0) bottom[++cnt2]=i;
			for(int j=1;j<=i;j++){
				if(calc_dis(x[i],y[i],z[i],x[j],y[j],z[j])<=4*r*r){
					if(find1(i)!=find1(j)) f[find1(i)]=find1(j);
				}
			}
		}
		bool flag=false;
		for(int i=1;i<=cnt1;i++){
			for(int j=1;j<=cnt2;j++){
				if(find1(ceiling[i])==find1(bottom[j])){
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
