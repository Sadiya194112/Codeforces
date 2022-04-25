#include<bits/stdc++.h>
using namespace std;
void Soln(){
    int n;  cin>>n;
    int a[n+3],i;
    int even=0,odd=0;
    for(i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]%2==0)   even++;
        else    odd++;
    }
    if(n==even || n==odd){
        cout<<"YES\n";
        return;
    }
    for(i=1; i<n; i++){
        if((a[i]%2==0)&&(a[i+1]%2==0)){
            cout<<"NO\n";
            return;
        }
        else if((a[i]%2==1)&&(a[i+1]%2==1)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Soln();
    }
    return 0;
}
