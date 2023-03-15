
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,r,ans=0;    cin>>n;
    if(n<=6)    cout<<15<<endl;
    else if(n<=8)   cout<<20<<endl;
    else if(n<=10)  cout<<25<<endl;
    else{
        ans = (n/10)*25;
        r = n%10;
        if(r==0){
            cout<<ans<<endl;
            return;
        }
        else if(r<=2) ans+=5;
        else if(r<=4)   ans+=10;
        else if(r<=6)   ans+=15;
        else if(r<=8)   ans+=20;
        else if(r==9)   ans+=25;
        cout<<ans<<endl;
    }
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
