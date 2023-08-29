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
int i,j,n,k,x,y,l;
int a[26];
void ac(){
    cin>>n>>k;
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);
    vector<int>v,p;
    int a[n+2];
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==k) v.pb(i);
    }
    if(v.size()==0){
        no; return;
    }
    if(n==1){
        if(a[0]==k){
            yes;
            return;
        }
    }
    sort(v.begin(), v.end());

    for(i=0; i<n; i++){
        if(a[i]>=k) p.pb(i);
    }
    sort(p.begin(), p.end());
    for(i=1; i<p.size(); i++){
        if(p[i]-p[i-1]<=2){
            yes;
            return;
        }
    }
    no;
}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}





















