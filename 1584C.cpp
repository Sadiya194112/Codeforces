#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,i,x,sum1=0,sum2=0;  cin>>n;
    int a[n+2],b[n+2];

    for(i=0; i<n; i++)  cin>>a[i];
    for(i=0; i<n; i++)  cin>>b[i];

    sort(a, a+n);
    sort(b, b+n);

    bool f=1;
    for(i=0; i<n; i++){
        if(b[i]>a[i]){
            if((a[i]+1)==b[i])  continue;
            else{
                f=0;
                break;
            }
        }
        else if(b[i]==a[i]) continue;
        else{
            f=0;
            break;
        }
    }
    if(f){
        cout<<"YES\n";
    }
    else    cout<<"NO\n";
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
