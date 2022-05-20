#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
void ac(){
    string s;   cin>>s;
    if(s.size()==2) cout<<s[1]<<nl;
    else{
        sort(s.begin(), s.end());
        cout<<s[0]<<nl;
    }
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
