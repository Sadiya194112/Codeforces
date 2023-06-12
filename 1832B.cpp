#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,k,i;      cin>>n>>k;
    int a[n+2],ps[n+2],suf[n+2];
    for(i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);

    ps[0]=0; ps[1]=a[1];
    for(i=2; i<=n; i++) ps[i] = ps[i-1]+a[i];

    suf[0]=0; suf[n]=a[n];
    for(i=n-1; i>=1; i--)   suf[i] = suf[i+1]+a[i];

    int x,y,j=1,mn;
    x = ps[2*k]; y=suf[n-k+1];
    mn = min(x,y);

    for(i=k-1; i>=1; i--){
        x = ps[2*i] + suf[n-j+1];
        y = ps[2*j] + suf[n-i+1];
        mn = min(mn, min(x,y));
        j++;
    }
    cout<<ps[n]-mn<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
