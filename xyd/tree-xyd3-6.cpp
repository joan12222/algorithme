#include<bits/stdc++.h>
using namespace std;
int n, tot;
string s[1010];
bool a[1010][1010];
void dfs(int k, int sum){
    for(int i=1;i<=n;i++){
        if(a[i][k]){
            a[i][k]=a[k][i]= false;
            dfs(i,sum + 1);
            a[i][k]=a[k][i]= true;
        }
    }
    if(sum>tot){
        tot=sum;
    }
    return ;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[i][j-1]=='1'){
                a[i][j]=a[j][i]= 1;
            }
        }
    }
    dfs(1,0);
    cout<<tot;
    return 0;
}
