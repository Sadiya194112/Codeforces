#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,i,j,val=0;
        cin>>n;
        int ar[n+5];
        for(i=1; i<=n; i++)     cin>>ar[i];

        int ind = n+1;
        vector<int> v;
        for(i=1; i<=n; i++){
            if(ar[i]==i)    v.push_back(ar[i]);
            else{
                ind = i;
                val = i;
                break;
            }
        }
        for(i = ind+1; i<=n; i++){
            if(ar[i]==val){
                for(j=i; j>=ind; j--)   v.push_back(ar[j]);
                for(j=i+1; j<=n; j++)   v.push_back(ar[j]);
                break;
            }
        }
        for(i=0; i<n; i++)  cout<<v[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
