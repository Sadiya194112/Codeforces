#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,k,d,i,j,ans,x;  cin>>n>>k>>d;
    int a[n+2];
    for(i=1; i<=n; i++)  cin>>a[i];
    ans = n;
    set<int> s;
    for(i=1; i+d-1<=n; i++){
        s.clear();
        for(j=i; j<i+d; j++){
            s.insert(a[j]);
        }
        x = s.size();
        ans = min(ans, x);
    }
    cout<<ans<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
