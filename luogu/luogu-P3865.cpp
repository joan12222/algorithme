#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
int n,m,f[100005][25],l,r,logg[100005]; 
int main(){
	n=read(),m=read();
	for(int i=1;i<=n;i++) f[i][0]=read();
	for(int i=2;i<=n;i++) logg[i]=logg[i/2]+1;
	for(int i=1;i<=25;i++){
		for(int j=1;j+(1<<i)-1<=n;j++) f[j][i]=max(f[j][i-1],f[j+(1<<(i-1))][i-1]);
	}
	while(m--){
		l=read(),r=read();
		int loggg=logg[r-l+1];
		cout<<max(f[l][loggg],f[r-(1<<loggg)+1][loggg])<<endl;
	}
	return 0;
}
