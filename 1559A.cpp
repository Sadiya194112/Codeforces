#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i;    cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    int ans =a[0];
    for(i=1; i<n; i++){
        ans = ans & a[i];
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
