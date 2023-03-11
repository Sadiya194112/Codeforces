#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,i,sum=0,x,y,m;  cin>>n;
    int a[n+2];
    for(i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    x = sum/n;
    y = sum%n;
    cout<<y*(n-y)<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
