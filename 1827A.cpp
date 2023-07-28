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
int i,ub,ans,c,x;
void ac(){
    ans = 1, c=0;
    int n;  cin>>n;
    int a[n],b[n],v;
    for(i=0; i<n; i++){
        cin>>v;
        a[i]=v;
    }
    for(i=0; i<n; i++)  cin>>b[i];
    sort(a, a+n);
    sort(b, b+n);
    
    for(i=n-1; i>=0; i--){
        x=b[i];
        ub = upper_bound(a, a+n, x)-a;
        ub = n-ub;
   //     cout<<ub<<' ';
        ans=(ans*(ub-c))%mod;
        c++;
    }
    cout<<ans%mod<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}

