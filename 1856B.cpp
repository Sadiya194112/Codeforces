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
int i,n,c,s,x;
void ac(){
    cin>>n; s=0;
    int a[n+2];
    for(i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    c = count(a, a+n, 1);
    if(n==1){
        no; return;
    }
    if(s-(2*c)>=n-c){
        yes; return;
    }
    else{
        no; return;
    }

    x = s-(n-1);
    for(i=0; i<n; i++){
        if(a[i]!=x){
            yes; return;
        }
    }
    no;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}




