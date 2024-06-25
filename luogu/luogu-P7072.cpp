#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,w,x;
int bucket[605]={0};
bool cmp(int x,int y){
	return x>y;
}
int main(){
	cin>>n>>w;
	for(int i=1;i<=n;i++){
		cin>>x;
		bucket[x]++;
		int sum=0;
		for(int j=600;j>=0;j--){
			sum+=bucket[j];
			if(sum>=max(1,i*w/100)){
				cout<<j<<" ";
				break;
			}
		}
	}
	return 0;
} 
