#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl "\n"
using namespace std;
void ac(){
    int n,k,i,j,x=1,ans=0;    cin>>n>>k;
    bitset<30> b(k);
    for(i=0; i<b.size(); i++){
        if(b[i]==1){
            x=1;
            for(j=1; j<=i; j++){
                x=(x*n)%mod;
            }
            ans = (ans + x)%mod;

        }
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
