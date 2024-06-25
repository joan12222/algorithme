#include<bits/stdc++.h>
using namespace std;
int n,k,pos[8005];//pos[x]:a[x]在s中的下标
pair<int,int> s[8005];
//s[i].first:值 s[i].second:s[i]对应的a中的位置
void inp(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>s[i].first;
		s[i].second=i;
		pos[i]=i;
	}
}
void onceSort(){
	for(int i=1;i<n;i++){
		if(s[i]>s[i+1]){
			swap(pos[s[i].second],pos[s[i+1].second]);
			swap(s[i],s[i+1]);
		}
	}
	for(int i=n-1;i>=1;i--){
		if(s[i]>s[i+1]){
			swap(pos[s[i].second],pos[s[i+1].second]);
			swap(s[i],s[i+1]);
		}
	}
}
void work(){
	for(int i=1;i<=n;i++){
		onceSort();//执行n趟冒泡，一定能把数据排好
	}
	while(k--){
		int op,x,y;
		cin>>op;
		if(op==1){
			cin>>x>>y;
			s[pos[x]].first=y;//更新
			onceSort();
		}else{
			cin>>x;
			cout<<pos[x]<<endl;
		}
	}
}
int main(){
	inp();
	work();
	return 0;
}