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
    for(i=0; i<n; i++) cin>>a[i];

    for(i=0; i<k; i++){
        cin>>x;
        l=0, r=n-1;
        bool f=1;
        while(l<=r){
            m = (l+r)/2;
            if(a[m]==x){
                f=0;
                break;
            }
            else if(a[m]<x) l=m+1;
            else if(a[m]>x) r=m-1;
        }
        if(f) no;
        else yes;
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
