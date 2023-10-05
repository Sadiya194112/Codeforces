#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
// mini = min_element(a, a+n)-a;
// minval = *min_element(a, a+n);
const int mod=1e9+7;
using namespace std;

int i,j,n,m,k,a,b;
int Case=1;
void ac(){
    int x,y,c=0;
    bool ok=0;
    cin>>n>>m>>k;
    cin>>x>>y;
    for(i=1; i<=k; i++){
        cin>>a>>b;
        if((abs(x-a)%2==0 && abs(y-b)%2==0) || (abs(x-a)%2!=0 && abs(y-b)%2!=0)) ok=1;
    }
    if(ok) no;
    else yes;
}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    // ac();

    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}























