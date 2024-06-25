#include<bits/stdc++.h>
using namespace std;
int c,N;
int w[32005],v[32005];
int w1[32005][3],v1[32005][3];
int f[32005];
int main(){
    cin>>c>>N;
    for(int i=1;i<=N;i++){
    	int p,q,r;
    	cin>>p>>q>>r;
    	if(r==0){
    		w[i]=p;
    		v[i]=p*q;
		}else{
			w1[r][0]++;
			w1[r][w1[r][0]]=p;
			v1[r][w1[r][0]]=p*q;
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=c;j>=w[i];j--){
			f[j]=max(f[j],f[j-w[i]]+v[i]);
			if(w[i]+w1[i][1]<=j) f[j]=max(f[j],f[j-w[i]-w1[i][1]]+v[i]+v1[i][1]);
			if(w[i]+w1[i][2]<=j) f[j]=max(f[j],f[j-w[i]-w1[i][2]]+v[i]+v1[i][2]);
			if(w[i]+w1[i][1]+w1[i][2]<=j) f[j]=max(f[j],f[j-w[i]-w1[i][1]-w1[i][2]]+v[i]+v1[i][1]+v1[i][2]);
		}
	}
	cout<<f[c];
    return 0;
}
