#include <bits/stdc++.h>
using namespace std;
int n;
int a[21][21];
int minn=INT_MAX;
int sum=0;
int vis[21];
void dfs(int k){
    if(k==n+1){
        if(minn>sum){
            minn=sum;
            return;
        }
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            vis[i]=1;
            sum+=a[k][i];
            if(sum<minn){
            	dfs(k+1);
			}
            vis[i]=0;
            sum-=a[k][i];
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
        vis[i]=0;
    }
    dfs(1);
    cout<<minn<<endl;
    return 0;
}
