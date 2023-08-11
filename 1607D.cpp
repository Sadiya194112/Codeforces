#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define f first 
#define s second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
const int mod=1e9+7;
using namespace std;
const int N=2e5+5;
int i,j,n,k;
void ac(){
    cin>>n; string s;
    bool vis[n+2];
    for(i=1; i<=n; i++) vis[i]=1;
    int a[n+2]; for(i=0; i<n; i++)  cin>>a[i];
    cin>>s;
    vector<int> r,b;
    for(i=0; i<s.size(); i++){
        if(s[i]=='B') b.pb(a[i]);
        if(s[i]=='R') r.pb(a[i]);
    }
    sort(b.begin(), b.end());
    sort(r.begin(), r.end());

    k=1;
    for(i=0; i<b.size(); i++){
        if(b[i]>=k){
            k++; continue;
        }
        else vis[k]=0;
    }

    for(i=0; i<r.size(); i++){
        if(r[i]<=k){
            k++; continue;
        }
        else vis[k]=0;
    }
    for(i=1; i<=n; i++){
        if(vis[i]==0){
           no; return;
        }
    }
    yes;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
 
}
 


