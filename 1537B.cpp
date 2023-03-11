#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    if(j==1){
        if(i==1)    cout<<1<<' '<<m<<' '<<n<<' '<<1<<endl;
        else        cout<<1<<' '<<1<<' '<<n<<' '<<m<<endl;
    }
    else if(j==m){
        if(i==1)    cout<<1<<' '<<1<<' '<<n<<' '<<m<<endl;
        else        cout<<1<<' '<<m<<' '<<n<<' '<<1<<endl;
    }
    else            cout<<1<<' '<<1<<' '<<n<<' '<<m<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
