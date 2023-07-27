#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define yes puts("YES")
#define no puts("NO")
using namespace std;
const int N=1e3+2, M=1e3+2;
int a[N][M],n,m,s,mx,x,y;
bool vis[N][M];

void check(int i, int j){
    if(i<0 || j<0 || i>=n || j>=m) return;
    if(!vis[i][j]){
        vis[i][j]=true;
        s+=a[i][j];
        if(!vis[i-1][j] && a[i-1][j])    check(i-1, j);
        if(!vis[i+1][j] && a[i+1][j])    check(i+1, j);
        if(!vis[i][j-1] && a[i][j-1])    check(i, j-1);
        if(!vis[i][j+1] && a[i][j+1])    check(i, j+1);
        
  //      mx = max(mx, s);
 //       cout<<mx<<endl;
    }
    
}

signed main(){
    int tc; cin>>tc;
    while(tc--){
        int i,j;    cin>>n>>m;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++) cin>>a[i][j];
        }
        bool f=true;
        s=0,mx = 0,x,y; x=0,y=0;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(a[i][j]){
                    check(i, j);
                    mx = max(mx, s);
                    s=0;
                    continue;
                }
            }
        }
        cout<<mx<<endl;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++) vis[i][j]=0;
        }
    }
}