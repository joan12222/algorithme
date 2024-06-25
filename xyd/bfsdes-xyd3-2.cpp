 #include<bits/stdc++.h>
using namespace std;
const int N=155;
int v[3],half;//v[i]代表第i杯酒的体积
int vis[N][N][N];
struct node{
	int a[3];//a[i]代表此时第i杯的状态
	int step;
};
queue<node> q;
bool check(node t){
	int sum=0;
	for(int i=0;i<3;i++){
		if(t.a[i]==half){
			sum++;
		}
	}
	if(sum==2){
		return true;
	}else{
		return false;
	}
}
void bfs(){
	q.push(node{v[0],0,0});
	vis[v[0]][0][0]=1;
	while(q.size()){
		node t=q.front();
		q.pop();
		//到达终点的状态
		if(check(t)){
			cout<<t.step;
			return;
		}
		//把第i杯的酒倒入第j杯中
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				//不能是同一杯,第i杯里有酒，第j杯没满
				if(i!=j&&t.a[i]!=0&&t.a[j]<=v[j]){
					int wine=min(t.a[i],v[j]-t.a[j]);
					node tmp=t;
					tmp.a[i]-=wine;//第i杯倒掉了wine的酒
					tmp.a[j]+=wine;//第j杯得到了wine的酒
					tmp.step++;
					if(vis[tmp.a[0]][tmp.a[1]][tmp.a[2]]==0){
						vis[tmp.a[0]][tmp.a[1]][tmp.a[2]]=1;
						q.push(tmp);
					}
				}
			}
		}
	}
	cout<<"NO";
}
int main(){
	cin>>v[0]>>v[1]>>v[2];
	half=v[0]/2;//half存所谓的第一杯的一半是多少
	bfs();
	return 0;
}