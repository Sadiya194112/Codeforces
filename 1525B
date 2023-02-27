@Sadiya


#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,i,j,f=1;   cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    bool ok=is_sorted(a, a+n);
    
    if(a[0]==n && a[n-1]==1){
        cout<<3<<endl;
        return;
    }
    if(ok){
        cout<<0<<endl;
        return;
    }
    if(a[n-1]==n || a[0]==1){
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
