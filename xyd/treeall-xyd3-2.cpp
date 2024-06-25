#include<bits/stdc++.h>
using namespace std;
string zhong,hou;
void dfs(int l1,int r1,int l2,int r2){
    if(l1>r1){
    	return;
	}
    cout<<hou[r2];
    int pos=-1,temp=hou[r2];
        for(int i=l1;i<=r1;i++){
            if(temp==zhong[i]){
                pos=i;
                break;
            }
        }
    dfs(l1,pos-1,l2,l2+pos-1-l1);
    dfs(pos+1,r1,l2+pos-1-l1+1,r2-1);
}
int main(){
    cin>>zhong>>hou;
    int n=zhong.length();
    dfs(0,n-1,0,n-1);
    return 0;
}