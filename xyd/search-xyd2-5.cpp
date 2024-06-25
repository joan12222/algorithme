#include<bits/stdc++.h>
using namespace std;
int ans=0,n,a[20]={1};
void dfs(int step,int s){
    if(step==n+1){
        if(!s){
            ans++;
        }
        return;
    }
    for(int i=a[step-1];i<=s;i++){
    	a[step]=i;
        dfs(step+1,s+step*i);
    }
}
int main(){
    cin>>n;
    dfs(1,n);
    cout<<ans;
    return 0;
}