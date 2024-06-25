#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,cnt;
}mp[405],dd;
int n,m,k,t=0;
bool cmp(struct node node1,struct node node2){
	return node1.cnt>node2.cnt;
}
int main(){
	dd.x=0,dd.y=0,dd.cnt=0;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int x;
			cin>>x;
			if(x!=0){
				mp[t].cnt=x;
				mp[t].x=i;
				mp[t].y=j;
				t++;
			}
		}
	}
	sort(mp,mp+t,cmp);
	//k-=1;
	bool is_first=true;
	for(int i=0;i<t;i++){
		if(is_first){
			if(k>=mp[i].x*2+1){
				is_first=0;
				k=k-mp[i].x-1;
				dd.x=mp[i].x;
				dd.y=mp[i].y;
				dd.cnt=mp[i].cnt;
			}else{
				break;
			}
		}else{
			if(k-abs(dd.x-mp[i].x)-abs(dd.y-mp[i].y)>mp[i].x+1){
				k=k-abs(dd.x-mp[i].x)-abs(dd.y-mp[i].y)-1;
				dd.x=mp[i].x;
				dd.y=mp[i].y;
				dd.cnt+=mp[i].cnt;
			}else{
				break;
			}
		}
	}
	cout<<dd.cnt;
	return 0;
}