#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,i,x,y,z;
void ac(){
    cin>>n;
    int a[n+5]; y=z=-1;
    for(i=1; i<=n; i++) cin>>a[i];
    for(i=n-1; i>=1; i--){
        if(a[i]<=a[i+1]){
            if(a[i]<0 || a[i]>=0) y=i;
            if(a[i+1]>=0) z=i+1;
        }
        else break;
    }
    x=i;
 //   cout<<x<<' '<<y<<' '<<z<<endl;
    if(z==-1){
        if(i==0){
            cout<<0<<endl; return;
        }
        cout<<-1<<endl; return;
    }
    if((n-x)<2){
        cout<<-1<<endl;
        return;
    }
    cout<<i<<endl;  
    for(i=x; i>=1; i--){
        cout<<i<<' '<<y<<' '<<z<<endl;
    }

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
