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
int i,c,cnt,x,y,l;
void ac(){
    int n,k; c=cnt=0; l=-1;    cin>>n>>k;
    int clr[n+2];   for(i=1; i<=n; i++) cin>>clr[i];
    
    x = clr[1], y=clr[n];
    if(x==y){
        c=count(clr+1, clr+n+1, x);
        if(c>=k)   yes;
        else    no;
        return;
    }
    for(i=1; i<=n; i++){
        if(clr[i]==x){
            c++;
            if(c==k){
                l=i;
                break;
            }
        }
    }
    if(l==-1){
        no; return;
    }
    cnt=count(clr+l+1, clr+n+1, y);
    if(cnt>=k) yes;
    else    no;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}
