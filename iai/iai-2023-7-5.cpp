#include<bits/stdc++.h>
using namespace std;
long long jc[21]={1,2,6,24,120,720,5040,40320,362800,3628800,39916800,479001600,1932053504,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
long long a[10000]={0};
long long book[10000]={0};
long long n,x=-1;
long long k;
void A(long long pos){
	if(pos==k+1){
		x++;
		if(x==n){
			for(long long i=1;i<=k;i++)
				printf("%d ",a[i]);
		}
		return;
	}
	for(long long i=1;i<=k;i++){
		if(book[i]==0){
			a[pos]=i;
			book[i]=1;
			A(pos+1);
			a[pos]=0;
			book[i]=0;
		}
	}
}
int main(){
	scanf("%d",&n);
	long long c;
	for(int i=0;i<9;i++){
		if(n<=jc[i]){
			c=i+1;
			break;
		}
	}
	for(k=0;k<=c;k++){
		A(1);
	}
	return 0;
}

