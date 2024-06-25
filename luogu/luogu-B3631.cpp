#include<bits/stdc++.h>
using namespace std;
int q,op,idx=1,x,y;
struct Node{
	int val,next;
}a[100005];
map<int,int> flag;
int main(){
	scanf("%d",&q);
	a[1].val=1;
	a[1].next=0;
	flag[1]=1;
	while(q--){
		scanf("%d",&op);
		if(op==1){
			scanf("%d%d",&x,&y);
			idx++;
			a[idx].val=y;
			a[idx].next=a[flag[x]].next;
			a[flag[x]].next=idx;
			flag[y]=idx;
			/*
			int i=1;
			while(i){
				if(a[i].val==x){
					idx++;
					a[idx].val=y;
					a[idx].next=a[i].next;
					a[i].next=idx;
					break;
				}	
				i=a[i].next;
			}
			*/
		}else if(op==2){
			scanf("%d",&x);
			printf("%d\n",a[a[flag[x]].next].val);
			/*
			int i=1;
			while(i){
				if(a[i].val==x){
					int tmp=a[i].next;
					printf("%d\n",a[tmp].val);
					break;
				}
				i=a[i].next;
			}
			*/
		}else{
			scanf("%d",&x);
			int tmp=a[flag[x]].next;
			int tmp2=a[tmp].next;
			a[flag[x]].next=tmp2;
			/*
			int i=1;
			while(i){
				if(a[i].val==x){
					if(a[i].next==0) break;
					int tmp=a[i].next;
					int tmp2=a[tmp].next;
					a[i].next=tmp2;
					break;
				}
				i=a[i].next;
			}
			*/
		}
	}
	return 0;
}
