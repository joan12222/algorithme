
#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
long long val;
struct Number{
	long long num;
	int cnt;
}x[10005];
bool cmp(Number a,Number b){
	if(a.num>b.num){
		return false;
	}else{
		return true;
	}
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=10000;i++){
		x[i].num=1500000005;
		x[i].cnt=0;
	}
	for(int i=1;i<=n;i++){
		scanf("%ld",&val);
		if(x[val].cnt==0){
			x[val].num=val;
		}
		x[val].cnt++;
	}
	sort(x+1,x+10001,cmp);
	for(int i=1;i<=10000;i++){
		if(x[i].num!=1500000005){
			printf("%ld %d\n",x[i].num,x[i].cnt);
		}else{
			//break;
		}
	}
	return 0;
}