#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,k,i,x,ans;    cin>>n>>k;
    ans = (n+k-1)/k;
    x = ans;
    i = n-1;
    if(((i+k-1)/k)==x)  ans++;
    cout<<ans<<endl;

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
