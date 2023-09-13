#include<bits/stdc++.h>
#define int long long
using namespace std;
int i,j,p,c,a;
void ac(){
    int n,d,p=0; string s,st="";
    cin>>n>>s;
    c=d=0;
    for(i=0; i<=n; i++) st+='0';

    for(i=0, j=n-1; i<j; i++,j--){
        if(s[i]==s[j]){
            if(s[i]=='1' || s[i]=='0') c++;
        }
        else d++;
    }
    if(n&1) p=1;
    if(p){
        st[d]='1';   st[d+p]='1';
        for(i=1; i<=c; i++){
            a = 2*i;
            st[a+d]='1';
            st[a+d+p]='1';
        }
    }
    else{
        st[d]='1';
        for(i=1; i<=c; i++){
            a = 2*i;
            st[a+d]='1';
        }
    }
    cout<<st<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
