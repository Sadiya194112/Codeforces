#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n;      cin>>n;
        int a[n+3];
        int o=0, e=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0)   e++;
            else    o++;
        }
        cout<<min(e,o)<<endl;
    }
    return 0;
}
