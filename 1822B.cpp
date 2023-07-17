#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int x,y;
void ac(){
    int n,i;    cin>>n;
    int a[n+2]; for(i=0; i<n; i++)  cin>>a[i];
    sort(a, a+n);
    x = a[0]*a[1];
    y = a[n-2]*a[n-1];
    cout<<max(x,y)<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}