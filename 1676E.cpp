#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int x,l;
void ac(){
    int n,q,i,j;  cin>>n>>q;
    int a[n+2], suf[n+2],p[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    sort(a, a+n);

    suf[n-1]=a[n-1];
    for(i=n-2; i>=0; i--)  suf[i] = suf[i+1]+a[i];

    for(i=0,j=n-1; i<n; i++,j--)  p[i]=suf[j];
//    for(i=0; i<n; i++)  cout<<p[i]<<' ';
//    cout<<endl;
    while(q--){
        cin>>x;
        if(x>p[n-1]) cout<<-1<<endl;
        else{
            l = lower_bound(p, p+n, x) - p;
            cout<<l+1<<endl;
        }
    }
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
