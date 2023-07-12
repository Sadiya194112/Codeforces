#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,i,s,c,mn;
void ac(){
    cin>>n; s=c=0;
    int a[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    mn = abs(a[0]);
    s+=abs(a[0]);
    if(a[0]<0)  c++;
    for(i=1; i<n; i++){
        if(a[i]<0) c++;
        s+=abs(a[i]);
        mn = min(mn, abs(a[i]));
    }
    if(c&1) s = s-(2*mn);
    cout<<s<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
