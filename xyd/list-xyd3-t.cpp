#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[25][25];
struct Max{
	int num;
	int x,y;
}maxx[500];
bool cmp(Max x,Max y){
	if(x.num>y.num){
		return true;
	}else{
		return false;
	}
}
int main(){
	cin>>n>>m>>k;
	int cnt=1,ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]!=0){
				maxx[cnt].num=a[i][j];
				maxx[cnt].x=i;
				maxx[cnt].y=j;
				cnt++;
			}
		}
	}
	sort(maxx+1,maxx+cnt,cmp);
	int time=0;
	if(maxx[1].x*2+1<=k){
		time+=maxx[1].x+1;
		ans+=maxx[1].num;
	}else{
		cout<<ans;
		return 0;
	}
	for(int i=2;i<=cnt;i++){
		int op=abs(maxx[i].x-maxx[i-1].x)+abs(maxx[i].y-maxx[i-1].y);
		if(time+op+1+maxx[i].x>k){
			cout<<ans;
			return 0;
		}else{
			ans+=maxx[i].num;
			time+=op+1;
		}
	}
	cout<<ans;
	return 0;
}