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
int i,j,n,l,r;
void ac(){
    cin>>n;
    int a[n+2], mn = LLONG_MAX;
    for(i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
    if(n==2){
        for(i=1; i<=n; i++) cout<<a[i]<<' ';
        cout<<endl;
        return;
    }
    for(i=2; i<=n; i++){
       if(a[i]-a[i-1]<mn){
           mn = a[i]-a[i-1];
           l = i-1;
           r = i;
       } 
    }
    vector<int>v; 
    
    for(i=r; i<=n; i++)  v.pb(a[i]);
    for(i=1; i<=l; i++) v.pb(a[i]);
    
    for(i=0; i<v.size(); i++)   cout<<v[i]<<' ';
    cout<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
 
}