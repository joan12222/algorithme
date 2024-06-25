#include<bits/stdc++.h>
using namespace std;
int lson[1000005],rson[1000005],ans1,ans2;//2=| 3=&
string s,post;
stack<char> st;
stack<int> sta;
int calc(int root){
	if(post[root]=='&'){
		int left=calc(lson[root]);
		if(left==0){
			//cout<<"aaa";
			ans1++;
			//cout<<ans1<<" ";
			return 0;
		}
		return calc(rson[root]);
	}
	if(post[root]=='|'){
		int left=calc(lson[root]);
		if(left==1){
			//cout<<"bbb";
			ans2++;
			//cout<<ans2<<" ";
			return 1;
		}
		return calc(rson[root]);
	}
	return post[root]-'0';
}
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'||s[i]=='1') post+=s[i];
		else if(s[i]=='(') st.push('(');
		else if(s[i]==')'){
			while(!st.empty()&&st.top()!='('){
				post+=st.top();
				st.pop();
			}
			st.pop();
		}else if(s[i]=='&'){
			while(!st.empty()&&st.top()=='&'){
				post+=st.top();
				st.pop();
			}
			st.push('&');
		}else{
			while(!st.empty()&&st.top()!='('){
				post+=st.top();
				st.pop();
			}
			st.push('|');
		}
	}
	while(!st.empty()){
		post+=st.top();
		st.pop();
	}
	//cout<<post<<endl;
	for(int i=0;i<post.size();i++){
		if(post[i]=='0'||post[i]=='1'){
			sta.push(i);
		}
		else{
			rson[i]=sta.top();
			sta.pop();
			lson[i]=sta.top();
			sta.pop();
			sta.push(i);
		}
	}
	for(int i=0; i<post.size(); i++) {
		//lson[i]：第i号位置的左孩子为第lson[i]号 
		if(post[i]=='0'||post[i]=='1') cout<<post[i]<<"left: -1 right: -1"<<endl;
		else cout<<post[i]<<"left: "<<post[lson[i]]<<" "<<"right: "<<post[rson[i]]<<endl;
	} 
	//cout<<lson[2]<<" "<<rson[2]<<endl;
	cout<<calc(post.size()-1)<<endl;
	cout<<ans1<<" "<<ans2;
	return 0;
}
