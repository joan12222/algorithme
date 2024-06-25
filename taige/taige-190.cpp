#include<bits/stdc++.h>
using namespace std;
int a[105][3]; 
int main(){
	freopen("lis.in","r",stdin);
	freopen("lis.out","w",stdout);
    int max_num=1,k=1;
	int n=1,op;
	while(cin>>op){
		a[n][0]=op;
		a[n][1]=1;
		a[n][2]=1;
		n++;
	}
	n--;
	for(int i=n-1;i>0;i--){
		int next=0,l=0;
		for(int j=i+1;j<=n;j++){
			if(a[j][0]>a[i][0]&&a[j][1]>l){
				next=j;
				l=a[j][1];
			}
		}
		if(next!=0){
			a[i][1]+=l;
			if(a[i][1]>max_num){
				max_num=a[i][1];
				k=i;
			}
			a[i][2]=next;
	    }
	}
	cout<<max_num;
	return 0;
}
