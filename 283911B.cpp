#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
// mini = min_element(a, a+n)-a;
// minval = *min_element(a, a+n);
const int mod=1e9+7;
using namespace std;
const int N=2e5+5;
int i,j,n,k,x,y,l,r,m;

void ac(){
    cin>>n>>k;
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);
    int a[n+2];
    for(i=1; i<=n; i++) cin>>a[i];

    for(i=0; i<k; i++){
        cin>>x;
        l=1, r=n;
        while(l+1<r){
            m = (l+r)/2;
            if(a[m]<=x) l=m;
            else if(a[m]>x) r=m;
        }
        // cout<<l<<' '<<r<<endl;
        if(a[l]<=x){
            if(a[r]<=x) cout<<r<<endl;
            else cout<<l<<endl;
        }
        else cout<<0<<endl;
    }
}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    ac();

    // int tc; cin>>tc;
    // while(tc--){
    //     ac();
    // }
}

