#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i=0,j,k;    cin>>n;
    string s;   cin>>s;
    while(i<n && s[i]=='?')    i++;
    for(j=i-1; j>=0; j--){
        if(s[j+1]=='R') s[j]='B';
        else    s[j]='R';
    }
    for(j=i; j<n; j++){
        if(s[j]=='?'){
            if(s[j-1]=='R') s[j]='B';
            else    s[j]='R';
        }
    }
    cout<<s<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
