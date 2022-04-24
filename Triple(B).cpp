#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int f=0;
        for(auto i:mp){
            if(i.second>=3){
                cout<<i.first<<"\n";
                f=1;
                break;
            }
        }
        if(f==0)    cout<<-1<<"\n";
    }
    return 0;
}
