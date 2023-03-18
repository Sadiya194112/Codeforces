#include<bits/stdc++.h>
using namespace std;
bool np[100];       //np = non prime
void prime(){
    int i,j;
    bool f;
    np[1]=true;
    for(i=2; i<100; i++){
        f = 1;
        for(j=2; j*j<=i; j++){
            if(i%j==0){
                f = 0;
                break;
            }
        }
        if(f)   np[i]=false;
        else    np[i]=true;
    }
}
void ac(){
    int n,i,j,x;
    string s;   cin>>n>>s;
    //If single char is a non prime then output that char
    for(i=0; i<n; i++){
        x = s[i]-'0';
        if(np[x]){
            cout<<1<<endl<<x<<endl;
            return;
        }
    }
    //Check 2 char every time from the string, if both together forms a non prime or not
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            char a = s[i];
            char b = s[j];
            string st = "";
            st+=a;
            st+=b;
            int p = stoi(st);
            if(np[p]){
                cout<<2<<endl<<p<<endl;
                return;
            }
        }
    }
}
signed main(){
    prime();
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
