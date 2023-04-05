#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
    int n,d,ans;    cin>>n>>d;
    int x,y;
    x = (d+3)/4; y = d/4;
    if(n&1){
        if(d%4==0)  ans = n;
        else if(d%4==1) ans = n+1+(y*4);
        else if(d%4==2) ans = n-1;
        else if(d%4==3) ans = n-(4*x);
    }
    else{
        if(d%4==0)  ans = n;
        else if(d%4==1) ans = n-1-(y*4);
        else if(d%4==2) ans = n+1;
        else if(d%4==3) ans = n+(4*x);
    }
    cout<<ans<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
