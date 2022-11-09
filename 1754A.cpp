#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void ac(){
    int n;  cin>>n;
    string s;   cin>>s;
    int q=0,ans;
    for(int i=0; i<n;){
        if(s[i]=='Q'){
            while(s[i]=='Q'){
                q++; i++;
            }
            while(s[i]=='A' && i<n){
                q--;
                i++;
            }
            if(q<0) q=0;
        }
        cout<<q<<" ";

    }
    if(q>=1)    cout<<"NO\n";
    else    cout<<"YES\n";
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
