#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,c,i,ans;
void ac(){
    cin>>n;
    int a[n+2]; ans=c=0;
    for(i=0; i<n; i++)  cin>>a[i];
    if(n==3 && a[1]&1){
        cout<<-1<<endl;
        return;
    }
    for(i=1; i+1<n; i++){
        if(a[i]==1)   c++;
    }
    if(c==n-2){
        cout<<-1<<endl;
        return;
    }
    for(i=1; i+1<n; i++){
        ans+=(a[i]+1)/2;
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
