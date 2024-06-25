#include<bits/stdc++.h>
const int maxn=300005;
char buffer[maxn];
char text[maxn*2];
using namespace std;
int main(){
    int head=300000;
    int tail=300000;
    int top=0;
    bool end=true;
    char c;
    while(cin>>c){
    	if(c=='['){
    		while(top>0){
    			top--;
    			head--;
    			text[head]=buffer[top];
			}
			end=false;
    	}
    	else if(c==']'){
    		while(top>0){
    			top--;
    			head--;
    			text[head]=buffer[top];
			}
			end=true;
    	}
    	else{
    		if(end){
    			text[tail]=c;
    			tail++;
			}else{
				buffer[top]=c;
				top++;
			}
		}
	}
	while(top>0){
    	top--;
    	head--;
    	text[head]=buffer[top];
	}
	for(int i=head;i<tail;i++){
		cout<<text[i];
	}
    return 0;
}

