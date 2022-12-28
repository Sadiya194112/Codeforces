@Sadiya

#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i,j,cnt=1;  cin>>n;
    vector<int> v[n+1];
    string st[n+1];
    for(i=0; i<n; i++){
        cin>>st[i];
    }
    set<int> s[n+1];
    for(i=1; i<=n; i++){
        s[i].insert(i);
    }
    for(i=0; i<n; i++){
        for(j=0; j<st[i].size(); j++){
            if(st[i][j]=='1'){
                s[j+1].insert(i+1);
            }
        }
    }
    for(i=1; i<=n; i++){
        cout<<s[i].size()<<" ";
        for(auto k:s[i])
            cout<<k<<" ";
        cout<<endl;
    }
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
