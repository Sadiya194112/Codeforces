#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i,odd=0;  cin>>n;
    int a[n+2];
    for(i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]&1)  odd++;
    }
    int even = n-odd;
    sort(a+1, a+n+1);
    if(odd==n || even==n){
        cout<<"YES\n";
        return;
    }
    int ind,f=1;
    for(i=1; i<=n; i++){
        if(a[i]&1){
            ind = i;
            break;
        }
    }
    for(i=1; i<=n; i++){
        if(a[i]%2==0){
            if(ind>i){
                f=0;
                break;
            }
        }
    }
    if(f)   cout<<"YES\n";
    else    cout<<"NO\n";
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
