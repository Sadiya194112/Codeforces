#include<bits/stdc++.h>
#define int long long
#define f first
#define s second
#define endl "\n"
using namespace std;
int n,m,h,x,y,z,i,j,sc,p,rs,rp,c;
void ac(){
    int idx=-1; x=y=0;
    cin>>n>>m>>h;
    vector<vector<int>>a(n,vector<int>(m));
    vector<vector<int>>ps(n,vector<int>(m));
    map<int,pair<int,int>>mp;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)  cin>>a[i][j];
    }
    for(i=0; i<n; i++){
        sort(a[i].begin(), a[i].end());
    }
    //Prefix sum on 2D sorted array
    for(i=0; i<n; i++){
        ps[i][0]=a[i][0];
        for(j=1; j<m; j++) ps[i][j]=ps[i][j-1]+a[i][j];
    }
//    cout<<endl;
//    for(i=0; i<n; i++){
//        for(j=0; j<m; j++)  cout<<ps[i][j]<<' ';
//        cout<<endl;
//    }
    c=1;
    for(i=0; i<1; i++){
        idx = lower_bound(ps[i].begin(), ps[i].end(),h)-ps[i].begin();

        if(ps[i][idx]==h)  rs=idx+1, rp=ps[i][idx];
        else if(ps[i][idx]>h) rs=idx, rp=ps[i][idx-1];
        else rs=m, rp=ps[i][m-1];

        mp[i] = make_pair(rs,rp);
    }
//    cout<<rs<<endl;
    for(j=0; j<rs; j++) x+=ps[0][j];
//    cout<<x<<endl;
    for(i=1; i<n; i++){
        y=0;
        idx = lower_bound(ps[i].begin(), ps[i].end(),h)-ps[i].begin();

        if(ps[i][idx]==h)  sc=idx+1, p=ps[i][idx];
        else if(ps[i][idx]>h) sc=idx, p=ps[i][idx-1];
        else sc=m, p=ps[i][m-1];
        mp[i] = make_pair(sc,p);
        if(sc>rs)   c++;
        else if(sc==rs){
//            for(j=0; j<rs; j++) x+=ps[0][j];
            for(j=0; j<sc; j++) y+=ps[i][j];
                if(x>y) c++;
        }
//        cout<<x<<' '<<y<<endl;
    }

    cout<<c<<endl;
//    cout<<endl;
//    for(auto &entry:mp) cout<<"mp["<<entry.f<<"] = "<<entry.s.f<<' '<<entry.s.s<<"\n";


}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
