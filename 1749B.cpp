#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void ac(){
    int n;  cin>>n;
    int a[n+2],b[n+2],i;
    ll sum=0;
    for(i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
        sum+=b[i];
    }
    int mx = *max_element(b, b+n);
    sum = sum-mx;
    cout<<sum<<nl;
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
