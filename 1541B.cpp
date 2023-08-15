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
int i,j,n,x,val;
void ac(){
    cin>>n;
    map<int,int>mp,m;
    for(i=0; i<n; i++){
        cin>>val;
        mp[val]++;
        m[val]=i+1;
    }
    int ans=0;
    for(x=3; x<2*n; x++){
        for(i=1; i*i<=x; i++){
            if(x%i==0){
                if(i!=x/i){
                    if(mp[i] && mp[x/i]){
                       if(m[i]+m[x/i]==x)   ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
 
}