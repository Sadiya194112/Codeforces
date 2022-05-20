#include<bits/stdc++.h>
#define ll  long long
#define nl  "\n"
using namespace std;

ll r,c,sq,root;

void ac(){
    ll n;  cin>>n;
    sq = ceil(sqrt(n));
    if((sq*sq-n)<=sq-1){
        r=sq;
        c=(sq*sq-n)+1;
        cout<<r<<" "<<c<<nl;
    }
    else{
        root=sqrt(n);
        r=n-(root*root);
        c=sq;
        cout<<r<<" "<<c<<nl;
    }
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
