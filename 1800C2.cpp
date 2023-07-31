#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define f first 
#define s second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
const int mod=1e9+7;
using namespace std;
const int N=1e9+7;
int i,n,s;
void ac(){
    cin>>n; s=0;
    priority_queue<int>pq;
    for(i=0; i<n; i++){
        int x;  cin>>x;
        if(x==0 && !pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        else pq.push(x);
    }
    cout<<s<<endl;
}

signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }

}






