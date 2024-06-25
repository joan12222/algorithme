#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[6][100005],q[100005];
bool cmp(int x,int y){
	int cnt=0;
	for(int i=1;i<=5;i++){
		if(a[i][x]>a[i][y]) cnt++;
		else cnt--;
	}
	if(cnt>0) return false;
	else return true;
}
int main(){
    cin>>n;
    for(int i=1;i<=5;i++){
    	for(int j=1,x;j<=n;j++){
    		cin>>x;
    		a[i][x]=j;
		}
	}
	for(int i=1;i<=n;i++) q[i]=i;
	sort(q+1,q+n+1,cmp);
	for(int i=1;i<=n;i++) cout<<q[i]<<" ";
    return 0;
}
