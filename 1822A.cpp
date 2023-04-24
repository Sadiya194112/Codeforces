#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
void ac(){
    int n,t,i;    cin>>n>>t;

    int a[n+2],b[n+2],x,y;
    for(i=0; i<n; i++)  cin>>a[i];
    for(i=0; i<n; i++)  cin>>b[i];

    vector<pair<int,int> > p;
    int ind=-1;
    for(i=0; i<n; i++){
        if((a[i]+i)<=t){
           x = b[i];
           ind = i;
           p.push_back({x,ind});
        }
    }
    if(ind==-1){
        cout<<-1<<endl;
        return;
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    cout<<p[0].second+1<<endl;

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
}
