#include<bits/stdc++.h>
using namespace std;
int n,a[6005],f[6005][2];
vector<int> edges[6005];
void solve(int k){
	f[k][1]=a[k];
	f[k][0]=0;
	for(int i=0;i<edges[k].size();i++){
		solve(edges[k][i]);
		f[k][0]+=max(f[edges[k][i]][0],f[edges[k][i]][1]);
		f[k][1]+=f[edges[k][i]][0];
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	bool bucket[6005]={false};
	for(int i=1,k,l;i<n;i++){
		cin>>l>>k;
		bucket[l]=true;
		edges[k].push_back(l);
	}
	int dot;
	for(int i=1;i<=n;i++){
		if(bucket[i]==false){
			dot=i;
			break;
		}
	}
	solve(dot);
	for(int i=1;i<=n;i++){
		cout<<"f("<<i<<",0)="<<f[i][0]<<endl;
		cout<<"f("<<i<<",1)="<<f[i][1]<<endl;
	}
	cout<<max(f[dot][0],f[dot][1]);
	return 0;
}
