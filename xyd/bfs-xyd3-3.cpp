#include<bits/stdc++.h>
using namespace std;
const int N=305;
int n,str,fnsh,a[201];
struct node{
	//坐标，到达这个点的步数
	int x,step;
};
void bfs(){
	queue<node> q;
	//dfs(sx,sy,0);
	q.push(node{str,0});
	while(q.size()){
		//now当前的位置
		node now=q.front();
		q.pop();//第一个已经被now获取了，把它去掉
		//当前位置 往8个方向扩展
		if(now.x==fnsh){
			cout<<now.step;
			return;
		}
		for(int i=-1;i<=1;i+=2){
			int nx=now.x+i*a[now.x];
			if(nx>=1&&nx<=n){
				q.push(node{nx,now.step+1});
			}
		}
	}
	cout<<"-1";
	return;
}
int main(){
	cin>>n>>str>>fnsh;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	bfs();
	return 0;	
}