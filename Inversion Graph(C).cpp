#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,i;
    cin>>n;
    int ar[n+3];
    for(i=1; i<=n; i++) cin>>ar[i];
    int ans = 1, cnt=1, val=ar[1];
    for(i=2; i<=n; i++){
        if(ar[i] > val){
            if(cnt==val){
                ans++;
            }
            val = ar[i];
        }
        cnt++;
    }
    cout<<ans<<"\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Solve();
    }
    return 0;
}
