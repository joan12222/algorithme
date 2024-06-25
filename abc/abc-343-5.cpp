#include<bits/stdc++.h>
using namespace std;
int v1,v2,v3;
int minn(int x,int y,int z) {return min(x,min(y,z));}
int maxx(int x,int y,int z) {return max(x,max(y,z));}
int calc2(int a1,int b1,int c1,int a2,int b2,int c2){
	return max(0,min(a1,a2)+7-max(a1,a2))*max(0,min(b1,b2)+7-max(b1,b2))*max(0,min(c1,c2)+7-max(c1,c2));
}
int calc3(int a1,int b1,int c1,int a2,int b2,int c2,int a3,int b3,int c3){
	return max(0,minn(a1,a2,a3)+7-maxx(a1,a2,a3))*max(0,minn(b1,b2,b3)+7-maxx(b1,b2,b3))*max(0,minn(c1,c2,c3)+7-maxx(c1,c2,c3));
}
int main(){
	cin>>v1>>v2>>v3;
	for(int a2=-7;a2<=7;a2++){
		for(int b2=-7;b2<=7;b2++){
			for(int c2=-7;c2<=7;c2++){
				for(int a3=-7;a3<=7;a3++){
					for(int b3=-7;b3<=7;b3++){
						for(int c3=-7;c3<=7;c3++){
							int vv3=calc3(0,0,0,a2,b2,c2,a3,b3,c3);
							int vv2=calc2(0,0,0,a2,b2,c2)+calc2(0,0,0,a3,b3,c3)+calc2(a2,b2,c2,a3,b3,c3)-vv3*3;
							int vv1=7*7*7*3-vv2*2-vv3*3;
							if(vv1==v1&&vv2==v2&&vv3==v3){
								cout<<"Yes"<<endl<<"0 0 0 "<<a2<<" "<<b2<<" "<<c2<<" "<<a3<<" "<<b3<<" "<<c3<<" ";
								return 0;
							}
						}
					}
				}
			}
		}
	}
	cout<<"No";
	return 0;
}
