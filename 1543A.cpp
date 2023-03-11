#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
void ac(){
    int a,b,x,y,g;    cin>>a>>b;
 
    if(a<b)     swap(a,b);
    g = a-b;
    if(g==0){
        cout<<0<<' '<<0<<endl;
        return;
    }
    x = a%g;
    y = b%g;
    cout<<g<<' '<<min(x,g-x)<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
