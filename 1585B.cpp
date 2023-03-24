#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void ac(){
    int n,k,i,c=0;  cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)  cin>>a[i];

    k=n-1;
    for(i=n-2; i>=0;){
        if(a[i]>a[k]){
            c++;
            k=i;
            i--;
        }
        else    i--;
    }
    cout<<c<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
