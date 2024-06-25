#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool do_min(int &a, int b) {
    if(a>b){
        a=b;
        return true;
    }
    return false;
}
vector<vector<int>> bfs(int h,int w,const vector<string> &a,int sx,int sy){
    vector<vector<int>> ans(h,vector<int>(w,inf));
    ans[sx][sy]=0;
    queue<pair<int,int>> q;
    q.push({sx,sy});
    while(!q.empty()) {
        pair<int,int> p=q.front();
        q.pop();
        for(int k=0;k<4;k++) {
            int nx=p.first+dx[k];
            int ny=p.second+dy[k];
            if(nx<0||nx>=h||ny<0||ny>=w||a[nx][ny]=='#') continue;
            if(do_min(ans[nx][ny],ans[p.first][p.second]+1)) q.push({nx,ny});
        }
    }
    return ans;
}
int main(){
	int h,w,t;
    cin>>h>>w>>t;
    vector<string> a(h);
    int sx,sy,ex,ey;
    vector<pair<int,int>> ls;
    for(int i=0;i<h;i++){
        cin>>a[i];
        for(int j=0;j<w;j++){
            if(a[i][j]=='S') sx=i,sy=j;
            if(a[i][j]=='G') ex=i,ey=j;
            if(a[i][j]=='o') ls.push_back({i,j});
        }
    }
    int num=ls.size();
    vector<vector<vector<int>>> d(num,vector<vector<int>>()); 
    for(int i=0;i<num;i++) d[i]=bfs(h,w,a,ls[i].first,ls[i].second);
    vector<vector<int>> dp(1<<num,vector<int>(num,inf));
    for(int i=0;i<num;i++) dp[1<<i][i]=d[i][sx][sy];
    for(int i=1;i<(1<<num);i++){
        for(int j=0;j<num;j++) {
            if(dp[i][j]==inf) continue;
            for(int nx=0;nx<num;nx++) {
                if(i>>nx&1) continue;
                do_min(dp[i|1<<nx][nx],dp[i][j]+d[j][ls[nx].first][ls[nx].second]);
            }
        }
    }
    int ans=-1;
    if(bfs(h,w,a,sx,sy)[ex][ey]<=t) ans=0;
    for(int i=1;i<(1<<num);i++){
        for(int j=0;j<num;j++){
            if(dp[i][j]+d[j][ex][ey]<=t){
                int now=0;
                for(int k=0;k<num;k++){
                	if(i>>k&1) now++;
				}
                ans=max(ans,now);
            }
        }
    }
    cout<<ans;
    return 0;
}
