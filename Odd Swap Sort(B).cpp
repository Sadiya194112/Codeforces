#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,i;
    cin>>n;
    int ar[n+5];
    vector<int> odd, even, v1, v2;
    for(i=0; i<n; i++){
        cin>>ar[i];
        if(ar[i]%2==1){
            v2.push_back(ar[i]);
            odd.push_back(ar[i]);
        }
        else{
            v1.push_back(ar[i]);
            even.push_back(ar[i]);
        }
    }
    sort(v2.begin(), v2.end());
    sort(v1.begin(), v1.end());
    if(v1==even && v2==odd) cout<<"YES\n";
    else                    cout<<"NO\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Solve();
    }
    return 0;
}
