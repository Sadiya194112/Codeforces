#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,k,i,x,y;
void ac(){
    cin>>n>>k;
    int a[n+2],f=0;
    for(i=0; i<n; i++)  cin>>a[i];
    x = n-k;
    y = n/2;
    vector<int> v;
    if(k<=y){
        cout<<"YES\n";
        return;
    }

    for(i=0; i<x; i++)  v.push_back(a[i]);
    for(i=k; i<n; i++)  v.push_back(a[i]);
    sort(v.begin(), v.end());

    for(i=0; i<x; i++)  a[i]=v[i];
    for(i=k; i<n; i++)  a[i]=v[x++];

    if(is_sorted(a, a+n)){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";

}
signed main(){
    int tc; cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
