#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
int hc,dc,hm,dm,k,w,a,h,d,amar,monster,i;
void ac(){
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    for(i=0; i<=k; i++){
        h = ((k-i)*a) + hc;
        d = (i*w) + dc;
        
  //      cout<<h<<' '<<d<<endl;
        
        amar = (hm+d-1)/d;
        monster = (h+dm-1)/dm;
//        cout<<amar<<' '<<monster<<endl;
        if(amar<=monster){
           yes; return;
        }
    }
    no;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}