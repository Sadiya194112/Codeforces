#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define f first
#define s second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
// mini = min_element(a, a+n)-a;
// minval = *min_element(a, a+n);
const int mod=1e9+7;
using namespace std;
const int N=2e5+5;
int i,j,n,k,x;

void ac(){
    cin>>n;
    // bool vis[n+2];
    // memset(vis,0,sizeof(vis));
    // //To fill the array by value 4
    // fill(a, a+n, 4);
    int ss=0;
    vector<int>a(n);
    for(auto &x : a){
        cin>>x;
        ss+=x;
    }
    int s,sum; s=sum=0;
    for(i=0; i<n; i++){
        if(i&1) s = s+abs(a[i]-1);
        else    sum = sum+abs(a[i]-1);
    }
    if(2*s<=ss){
        for(i=0; i<n; i++){
            if(i&1) cout<<1<<' ';
            else cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    else{
        for(i=0; i<n; i++){
            if(i&1) cout<<a[i]<<' ';
            else cout<<1<<' ';
        }
        cout<<endl;
    }
}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}

















