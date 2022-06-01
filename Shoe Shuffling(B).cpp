#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
const int N=1e5+9;
int a[N];
map<int,int> m;
void ac(){
    m.clear();
    int n;  cin>>n;
    bool fl=false;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(int i=1; i<=n; i++){
        if(m[a[i]]==1) fl=true;
    }
    if(fl)  cout<<-1<<nl;
    else{
        for(int i=1; i<=n; i++){
            if(a[i]!=a[i-1]){
                cout<<m[a[i]]+i-1<<" ";
            }
            else    cout<<i-1<<" ";
        }
        cout<<nl;
    }
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
