#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int mx,x,idx;
void ac(){
    int n,t,i;    cin>>n>>t; mx=0;
    int a[n+2];     for(i=0; i<n; i++)  cin>>a[i];
    int b[n+2];     for(i=0; i<n; i++)   cin>>b[i];
    for(i=0; i<n; i++){
        x = a[i];
        if(a[i]<=t){
            if(b[i]>mx) mx=b[i],idx=i;
        }
        t--;
    }
    if(i==n && mx==0)   cout<<-1<<endl;
    else    cout<<idx+1<<endl;

}
signed main(){
    int tc; cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}