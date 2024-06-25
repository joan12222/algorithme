#include<bits/stdc++.h>
using namespace std;
int t,l,r,with90[1005];
int main(){
	cin>>t;
	while(t--){
		cin>>l>>r;
		if(r-l<90){
			int ans=0,num;
			for(int i=l;i<=r;i++){
				string s=to_string(i);
				char maxx='0',minn='9';
				for(int j=0;j<s.size();j++){
					maxx=max(maxx,s[j]);
					minn=min(minn,s[j]);
				}
				//cout<<i<<" "<<maxx<<" "<<minn<<" "<<(maxx-'0')-(minn-'0')<<endl;
				if((maxx-'0')-(minn-'0')>ans){
					ans=(maxx-'0')-(minn-'0');
					num=i;
					if(ans==9) break;
				}
			}
			cout<<num<<endl;
		}else{
			string s1=to_string(l);
			int n=s1.size();
			
		}
	}
	return 0;
}
