#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i,j,cnt=1;  cin>>n;
    vector<int> v[n+1];
    string st[n+1];
    for(i=0; i<n; i++){
        cin>>st[i];
        v[i].push_back(cnt);
        cnt++;
    }
    for(i=0; i<n; i++){
        for(j=0; j<st[i].size(); j++){
            if(st[i][j]=='1'){
                v[j].push_back(i+1);
            }
        }
    }
    for(i=0; i<n; i++){
        cout<<v[i].size()<<" ";
        for(j=0; j<v[i].size(); j++)
            cout<<v[i][j]<<" ";
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
