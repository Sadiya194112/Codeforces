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
int i,j,n,k,x,y;

void ac(){
    cin>>n;
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);
    int a[n+2];
    for(i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    cin>>k;
    for(i=0; i<k; i++){
        int l,r;    cin>>l>>r;
        x = lower_bound(a, a+n, l)-a;
        y = upper_bound(a, a+n, r)-a;
        if(a[y]>r) y--;
        // cout<<x<<' '<<y<<endl;
        cout<<y-x+1<<' ';
    }
    cout<<endl;

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
