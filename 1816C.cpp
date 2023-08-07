#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define f first 
#define s second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
const int mod=1e9+7;
using namespace std;
const int N=2e5+5;
int i,n,d;
void ac(){
    cin>>n; 
    int a[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    if(n&1){
        yes;
        return;
    }
    for(i=1; i+1<n; i++){
        d = a[i-1]-a[i];
        a[i] = a[i]+d;
        a[i+1] = a[i+1]+d;
    }
    bool f=1;
    for(i=1; i<n; i++){
        if(a[i-1]<=a[i]) continue;
        else{
            f=0;
            break;
        }
    }
    if(f) yes;
    else no;
    
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}





