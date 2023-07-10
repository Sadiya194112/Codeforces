#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int a,b,k;
signed main(){
    int tc,l,i;     cin>>tc;
    string s,st,str;
    while(tc-- && cin>>s){
        l = s.size();
        int v[l]; bool ok=false;
        for(i=1; i<l; i++){
            a = s[i-1]-'0';
            b = s[i]-'0';
            v[i] = a+b;
        }

        for(i=1; i<l; i++){
            if(v[i]>=10){
                ok = true;
                k=i;
                continue;
            }
        }
        if(ok){
            st = to_string(v[k]);
            s.replace(k-1, 2, st);
            cout<<s<<endl;
        }
        else{
            str = to_string(v[1]);
            s.replace(0,2,str);
            cout<<s<<endl;
        }
    }
    return 0;
}
