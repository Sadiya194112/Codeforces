#include<bits/stdc++.h>
#define ll long long
using namespace std;
void Soln(){
    string s,t;   cin>>s>>t;
    sort(t.begin(), t.end());
    int l = t.length();
    int sl = s.size();
    if(l==1){
        if(t[0]!='a')   cout<<(1LL<<sl)<<"\n";
        else    cout<<"1\n";
    }
    else if(l>1){
        if(t[0]=='a')   cout<<"-1\n";
        else    cout<<(1LL<<sl)<<"\n";
    }

}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        Soln();
    }
    return 0;
}
