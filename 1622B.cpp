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

void ac(){
    string s;
    cin>>n;
    int b[n+2];
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));
    memset(b, 0, sizeof(b));

    //To fill the array with a value
    // fill(a, a+n, 4);
    int a[n+2];
    vector<pair<int,int>>p,pr;

    for(i=1; i<=n; i++) cin>>a[i];
    cin>>s;
    s='@'+s;
    int c = count(s.begin(), s.end(), '0');

    for(i=1; i<=s.size(); i++){
        if(s[i]=='0'){
            p.pb({a[i], i});
        }
        else{
            pr.pb({a[i], i});
        }
    }
    sort(p.begin(), p.end());
    sort(pr.begin(), pr.end());
    // for(i=0; i<p.size(); i++)   cout<<p[i].ff<<' '<<p[i].ss<<endl;

    for(i=0,j=1; i<p.size(); i++){
        x = p[i].ss;
        b[x]=j;
        j++;
    }
    for(i=0,k=j; i<pr.size(); i++){
        x = pr[i].ss;
        b[x] = k;
        k++;
    }

    for(i=1; i<=n; i++) cout<<b[i]<<' ';
    cout<<endl;

}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);


    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}
