#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
void ac(){
    int n,x,t,m,y,ans;    cin>>n>>x>>t;
    if(x>t) ans = 0;
    else if(x==t)   ans = n-1;
    else{
        m = t/x;
        if(m>=n)    ans = n*(n-1)/2;
        else{
            ans = (n-m)*m + m*(m-1)/2;
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
