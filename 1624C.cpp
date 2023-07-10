@Sadiya

#include<bits/stdc++.h>
using namespace std;
int n,i,x;
signed main(){
    int tc;     cin>>tc;
    while(tc-- && cin>>n){
        int a[n+2]; bool used[n+2]={false};
        bool ok = true;
        for(i=1; i<=n; i++)     cin>>a[i];
        sort(a+1, a+n+1);
        reverse(a+1, a+n+1);

        for(i=1; i<=n; i++){
            x = a[i];
            while(x>n || used[x]==true){
                x/=2;
            }
           if(x>0) used[x]=true;
           else ok = false;
        }
        if(ok)   cout<<"YES\n";
        else    cout<<"NO\n";
    }
    return 0;
}
