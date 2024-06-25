#include<bits/stdc++.h>
using namespace std;
int ans=0,n;
void dfs(int step,int s){//n指的是这个数选或者不选
    if(step==n+1){
        if(s==n){
            ans++;
        }
        return;
    }
    for(int i=0;i<=3;i++){
        dfs(step+1,s+step*i);
    }
}
int main(){
    cin>>n;
    dfs(1,0);
    cout<<ans;
    return 0;
}