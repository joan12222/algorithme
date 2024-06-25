#include<bits/stdc++.h>
using namespace std;
string in1,in2;
string calc_back(string pre,string mid){
	if(pre=="") return "";
	char root=pre[0];
	string left_mid,right_mid,left_pre,right_pre;
	for(int i=0;i<mid.size();i++){
		if(root==mid[i]){
			left_mid=mid.substr(0,i);
			right_mid=mid.substr(i+1);
			left_pre=pre.substr(1,i);
			right_pre=pre.substr(i+1);
		}
	}
	return calc_back(left_pre,left_mid)+calc_back(right_pre,right_mid)+root;
}
int main(){
	cin>>in2>>in1;
	cout<<calc_back(in1,in2);
    return 0;
}
