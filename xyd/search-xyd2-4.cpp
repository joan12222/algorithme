#include<bits/stdc++.h>
using namespace std;
int dfs(int n,int m){
    if(n==0||m==1)
        return 1;
    if(n<m)
        return dfs(n,n);
    else
        return dfs(n,m-1)+dfs(n-m,m);
}
int main(){
    int T,o,p;
    cin>>T;
    for(int i=1;i<=T;i++){      
		cin>>o>>p;
        cout<<dfs(o,p)<<endl;
    }
    return 0;
}