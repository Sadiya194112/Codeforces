#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
    int n,i,c=0;    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    reverse(a, a+n);

    int x,y;
    x = a[0]*a[1];
    y = a[n-1]*a[n-2];
    cout<<max(x,y)<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
