#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N=2e5+5;
int n,i,j,x,ind;
int a[N],cnt[N],c,ans,mx;
bool f;
void ac(){
    cin>>n; c=0;
    for(i=1; i<=n; i++)  cin>>a[i];

    for(i=1; i<=n; i++){
        if(a[i]==1){
            c++; continue;
        }
        if(a[i]>n)  continue;
        for(j=1; j*j<=n; j++){
            x = a[i]*j;
            if(x<=n) cnt[x]++;
        }
        while(x<=n){
            x = a[i]*j;
            if(x<=n) cnt[x]++;
            j++;
        }
        j=1;
    }
    
    sort(cnt+1, cnt+n+1);
 //   for(i=1; i<=n; i++) cout<<cnt[i]<<' ';
//    cout<<endl;
    cout<<cnt[n]+c<<endl;
    for(i=1; i<N; i++) cnt[i]=0;

}
signed main(){
    int tc; cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}