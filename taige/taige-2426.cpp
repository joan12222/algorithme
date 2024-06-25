#include<bits/stdc++.h>
using namespace std;
stack<int> st;
bool del[100005]={false};
bool label[100005]={false};
int maxnow=0;
int main(){
	int m,op;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>op;
		if(op==1){
			st.push(maxnow++);
		}else if(op==2){
			for(int j=0;j<maxnow;j++){
				if(del[maxnow-j]==false&&label[maxnow-j]==false){
					cout<<maxnow-j<<endl;
					label[maxnow-j]=true;
					if(j==0){
						maxnow--;
					}
					break;
				}
			}
		}else{
			if(maxnow/2!=0&&del[maxnow/2]==false&&label[maxnow/2]==false){
				del[maxnow/2]=true;
			}
		}
	}
	return 0;	
}
