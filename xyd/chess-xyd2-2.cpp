#include<iostream>
#include<algorithm>
using namespace std;
int fx[9]={0,-2,-1,1,2,2,1,-1,-2};
int fy[9]={0,1,2,2,1,-1,-2,-2,-1};
int ax,ay,mx,my;
long long ans;
long long f[30][30];
bool v[30][30];
int main()
{
    cin>>ax>>ay>>mx>>my;
    ax++;ay++;mx++;my++;
    f[1][1]=1;
    v[mx][my]=1;
    for(int i=1;i<=8;i++)
    v[mx+fx[i]][my+fy[i]]=1;
    for(int i=1;i<=ax;i++)
        for(int j=1;j<=ay;j++)
        {
            if(v[i][j])continue;
            f[i][j]=max(f[i][j],f[i-1][j]+f[i][j-1]); 
        }
    cout<<f[ax][ay];
    return 0;
} 

