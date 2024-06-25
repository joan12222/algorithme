#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,a[101],b[101];
	double c[101];
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		c[i]=double(b[i])/a[i];
	}
  	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(c[j]<c[j+1]){ 
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
				swap(c[j],c[j+1]);
			}
		}
	}

	double sum=0.0,ans=0.0,num;
	for(int i=1;i<=n;i++){
		if(sum+a[i]<t){
			sum+=a[i];
			ans+=b[i];
		}else if(sum+a[i]==t){
			ans+=b[i];
			printf("%.2lf",ans);
			return 0;
		}else{
			num=b[i]*((t-sum)/a[i]);
			ans+=num;
			printf("%.2lf",ans);
			return 0;
		}
	}
	printf("%.2lf",ans);

	return 0;
}