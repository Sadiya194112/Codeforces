#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,i;
void ac(){
    cin>>n;
    int a[n+2],x,mn,gc=0;
    for(i=0; i<n; i++)  cin>>a[i];
    sort(a, a+n);
    mn = a[0];
    int b[n+2]={0};
    for(i=1; i<n; i++){
        if(a[i]!=mn){
            x = a[i]-mn;
            gc = __gcd(gc, x);
        }
    }
    cout<<gc<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
