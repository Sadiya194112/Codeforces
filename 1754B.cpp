#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n;  cin>>n;
    int a[n+2],x,j;
    x = (n/2)+1;
    j=1;
    for(int i=2; i<=n; i+=2){
        a[i-1]=x;
        a[i]=j;
        x++;j++;
    }
    if(n&1) a[n]=n;
    for(int i=1; i<=n; i++)     cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
