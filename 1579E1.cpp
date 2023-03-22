#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,i,x;      cin>>n;
    int a[n];
    for(i=0; i<n; i++)  cin>>a[i];

    deque<int> d;
    deque<int> ::iterator it;

    it = d.begin();
    d.push_back(a[0]);
    x = *it;
    for(i=1; i<n; i++){
        if(a[i]<x){
            d.push_front(a[i]);
            x = *(d.begin());
        }
        else{
            d.push_back(a[i]);
            x = *(d.begin());
        }
    }
    for(it=d.begin(); it!=d.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
