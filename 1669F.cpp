#include<bits/stdc++.h>
#define int long long
#define endl "\n"
int n,i,j,ans,x,y;
using namespace std;
void ac(){
    cin>>n; ans=0; x=0,y=n+1;
    int a[n+2],ps[n+2],suf[n+2];
    for(i=1; i<=n; i++)  cin>>a[i];

    ps[1] = a[1];
    for(i=2; i<=n; i++) ps[i] = ps[i-1]+a[i];

    suf[n] = a[n];
    for(i=n-1; i>=1; i--)  suf[i] = suf[i+1]+a[i];


    for(i=1,j=n; i<j;){
        if(ps[i]<suf[j])    i++;
        else if(ps[i]>suf[j])   j--;
        else{
            ans+=(i-x); ans+=(y-j);
            x=i, y=j;
            i++,j--;
        }
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
