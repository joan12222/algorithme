#include <bits/stdc++.h>
using namespace std;
int a[10005][105],bk[10005][105],dd[10005][105]; 
int quan[10005],lm; 
int n,m,ff,sum,nn=0; 
int main(){
    scanf("%d%d",&n,&m);
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        for (int j=0;j<m;j++){
            scanf("%d%d",&bk[i][j],&a[i][j]);
            quan[i]=quan[i]+bk[i][j];            
        }
    }
    scanf("%d",&ff);
    for(int i=1;i<=n;i++){
        sum=sum+a[i][ff];
        lm=a[i][ff];
        lm=lm%quan[i]+quan[i];
        lm=lm-bk[i][ff];
        while(lm>0){
            ff++;
            ff=ff%m;
            lm=lm-bk[i][ff];
        }
    }    
    printf("%d",sum%20123);
    return 0;
}
