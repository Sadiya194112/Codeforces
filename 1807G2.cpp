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
const int N=1e9+7;
int i,n,c,cnt;
void ac(){
    bool f=1; cnt=0;
    cin>>n;
    int a[n+2],ps[n+2];
    for(i=0; i<n; i++)  cin>>a[i];
    sort(a, a+n);
    ps[0]=a[0];
    
    for(i=1; i<n; i++) ps[i]=ps[i-1]+a[i];
    if(n==1){
        if(a[0]==1) yes;
        else    no;
        return;
    }
    c = count(a, a+n, 1);
    if(c<2){
        no; return;
    }
    for(i=1; i<n; i++){
        if(a[i]>ps[i-1]){
            no; return;
        }
        cnt++;
    }
    if(cnt==n-1) yes;
    else    no;
    
}

signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}






