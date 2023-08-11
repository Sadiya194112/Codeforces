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
int i,j,n,m,k,x,ans;
void ac(){
    cin>>n>>k; ans=0;
    int a[n+2], b[k+2];
    for(i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
    x = n-(2*k)+1;
    for(i=x,j=1; i<x+k; i++,j++){
        b[j]=a[i];
    }
    // for(i=1; i<=k; i++) cout<<b[i]<<' ';
    // cout<<endl;
    for(i=k,j=n; i>=1 && j>=n-k+1; i--,j--){
        ans+=(b[i]/a[j]);
        // cout<<b[i]<<' '<<a[j]<<endl;
    }
    // cout<<ans<<endl;
    for(i=1; i<x; i++) ans+=a[i];
    cout<<ans<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
 
}
 


