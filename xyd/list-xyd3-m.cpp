#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt=1,sum=0,flag=0;
    int n;
    cin>>n;
    while(1){
        sum+=cnt;
        for(int i=1;i<=cnt;i++){
        	if(sum-i-i*2==n){
	            cout<<i<<" "<<cnt;
	            flag=1;
	            break;
	        }
		}
        if(flag==1) break;
        cnt++;
    }
    return 0;
}