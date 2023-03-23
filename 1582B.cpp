#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i,one,zero;      cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)  cin>>a[i];

    one = count(a, a+n, 1);
    zero = count(a, a+n, 0);

    cout<<one*(1LL<<zero)<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
