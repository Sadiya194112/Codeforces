#include<bits/stdc++.h>
#define ll  long long
#define nl "\n"
using namespace std;
void ac(){
    ll a,b,c,x=0,y=0,z=0;
    cin>>a>>b>>c;
    y=b, z=c;
    ll div=ceil(z+y-1/y);
    x = (div*y)+a;
    cout<<x<<" "<<y<<" "<<z<<nl;
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
