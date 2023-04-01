#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
void ac(){
    int n,i,j;        cin>>n;
    string s;       cin>>s;
    vector<int> v;

    for(i=0,j=n-1; i<j;){
        if(s[i]>s[j]){
            v.push_back(i+1);
            v.push_back(j+1);
            i++;j--;
        }
        else if(s[i]==s[j]){
            if(s[i]=='0') i++;
            else if(s[i]=='1') j--;
        }
        else if(s[i]<s[j]){
            i++; j--;
        }
    }
//    for(i=0; i<v.size(); i++)   cout<<v[i]<<" ";
//    cout<<endl;
    sort(v.begin(), v.end());
    if(v.size()==0) cout<<0<<endl;
    else{
        cout<<1<<endl;
        cout<<v.size()<<" ";
        for(i=0; i<v.size(); i++)   cout<<v[i]<<" ";
        cout<<endl;
    }

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
