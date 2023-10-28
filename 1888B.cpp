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

int i,j,n,x,k,y;
int Case=1;
void ac(){
    cin>>n>>k;
    int a[n+2],mn,cnt=0;
    mn = LLONG_MAX;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0)   cnt++;
    }

    for(i=0; i<n; i++){
        x = (a[i]+k-1)/k;
        y = x*k-a[i];
        mn = min(mn, y);
    }
    if(k!=4){
        cout<<mn<<endl;
        return;
    }
    for(i=0; i<n; i++){
        if(a[i]%4==0){
            cout<<0<<endl;
            return;
        }
    }
    y = max(0ll, 2-cnt);
    cout<<min(mn, y)<<endl;

}

signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    // ac();

    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}


