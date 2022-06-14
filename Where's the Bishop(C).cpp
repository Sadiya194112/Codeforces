#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);
    int tc;     cin>>tc;
    while(tc--){
        char ch[10][10];
        char c;
        for(int i=1; i<=8; i++){
            for(int j=1; j<=8; j++){
                cin>>ch[i][j];
            }
        }
        int x,y;
        for(int i=1; i<=8; i++){
            for(int j=1; j<=8; j++){
                if(ch[i][j]=='#'){
                    if(ch[i-1][j-1]=='#' && ch[i-1][j+1]=='#' && ch[i+1][j-1]=='#' && ch[i+1][j+1]=='#'){
                        x=i, y=j;
                    }
                }
            }
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
