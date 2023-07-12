#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,m,k,i;    cin>>n;
    m=n/2;
    int a[n+2]={0};
    if(n==1)    cout<<1<<endl;
    else if(n==2)    cout<<"1 2\n";
    else{
        a[m]=1; a[n-1]=2; a[0]=3;
        for(i=0,k=4; i<n; i++){
            if(a[i]==0) a[i]=k, k++;
        }
        for(i=0; i<n; i++)  cout<<a[i]<<' ';
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