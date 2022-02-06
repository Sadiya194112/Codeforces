#include<iostream>
using namespace std;
int lmn, lmx, rmx, rmn, p1,p2,p3;
void Solve(){
    int n,i,mn = INT_MAX, mx=INT_MIN;
    cin>>n;
    int ar[n];
    for(i=1; i<=n; i++)     cin>>ar[i];
    for(i=1; i<=n; i++){
        if(ar[i] < mn){
            mn = ar[i];
        }
        if(ar[i] > mx){
            mx = ar[i];
        }
    }
//    cout<<mn<<" "<<mx<<endl;
    for(i=1; i<=n; i++){
        if(ar[i]==mn)   lmn = i;
        if(ar[i]==mx)   lmx = i;
    }
//    cout<<lmn<<" "<<lmx<<endl;
    rmx = n-lmx+1;
    rmn = n-lmn+1;
//    cout<<rmn<<" "<<rmx<<endl;
    p1 = max(lmn, lmx);
    p2 = max(rmn, rmx);
    p3 = min(lmn+rmx, rmn+lmx);
    cout<< min(p1, min(p2, p3))<<endl;

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Solve();
    }
    return 0;
}
