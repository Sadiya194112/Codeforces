#include<bits/stdc++.h>
#define int long long
const int N = 1000005;
using namespace std;
vector<bool>isPrime(N,true);

void sieve(){
    int i,j;
    isPrime[0]=isPrime[1]=false;
    for(i=2; i<N; i++){
        if(isPrime[i]){
            for(j=i*i; j<=N; j+=i){
                isPrime[j]=false;
            }
        }
    }
}
void ac(){
    int n,m,x,i,j;       cin>>n>>m;
    x = 1;
    int a[n+2][m+2];

    if(!isPrime[n] && isPrime[m]){
        for(i=1; i<=m; i++){
            for(j=1; j<=n; j++){
                a[j][i]=x++;
            }
        }
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    else if(isPrime[n] && !isPrime[m]){
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                a[i][j]=x++;
            }
        }
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    else{
        if(n<=m){
            for(i=1; i<=m; i+=2){
                for(j=1; j<=n; j++){
                    a[j][i]=x++;
                }
            }
            for(i=2; i<=m; i+=2){
                for(j=1; j<=n; j++){
                    a[j][i]=x++;
                }
            }
            for(i=1; i<=n; i++){
                for(j=1; j<=m; j++){
                    cout<<a[i][j]<<' ';
                }
                cout<<endl;
            }
        }
        else{
            for(i=1; i<=n; i+=2){
                for(j=1; j<=m; j++){
                    a[i][j]=x++;
                }
            }
            for(i=2; i<=n; i+=2){
                for(j=1; j<=m; j++){
                    a[i][j]=x++;
                }
            }
            for(i=1; i<=n; i++){
                for(j=1; j<=m; j++){
                    cout<<a[i][j]<<' ';
                }
                cout<<endl;
            }
        }
    }

}
signed main(){
    sieve();
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
