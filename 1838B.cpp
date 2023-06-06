#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i,x,y,z;    cin>>n;
    int v[n+2];
    for(i=1; i<=n; i++)  cin>>v[i];
    for(i=1; i<=n; i++){
        if(v[i]==1) x = i;
        if(v[i]==2) y = i;
        if(v[i]==n) z = i;
    }
    if((z>x && z<y) || (z>y && z<x)){
        cout<<x<<' '<<y<<endl;
        return;
    }
    int a = abs(z-x);
    int b = abs(z-y);
    if(a<b){
        cout<<x<<' '<<z<<endl;
        return;
    }
    cout<<y<<' '<<z<<endl;

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
