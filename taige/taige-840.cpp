#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
	ll left,right,value;
}tree[1000005];
ll n;
ll ans[1000005],cnt=0;
void mid(int a){
    if(tree[a].left!=-1) mid(tree[a].left);
    cnt++;
    ans[cnt]=tree[a].value;
    if(tree[a].right!=-1) mid(tree[a].right);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>tree[i].value;
    for(int i=1;i<=n;i++) cin>>tree[i].left>>tree[i].right;
    mid(1);
    for(int i=1;i<=cnt;i++){
    	if(ans[i]!=-1) cout<<ans[i]<<" ";
	}
    return 0;
}
