#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e6+7;

void ac(){
  int n,m,i;  cin>>n>>m;
  multiset<int> s;
  int b[m+2],x;
  for(i=0; i<n; i++){
  	 cin>>x;
  	 s.insert(x);
  }
  for(i=0; i<m; i++)  cin>>b[i];
  for(i=0; i<m; i++){
  	 auto it = s.begin();
  	 s.erase(it);
  	 s.insert(b[i]);
  }
  int sum=0;
  for(auto it:s) sum+=it;
  cout<<sum<<endl;
}
signed main(){
	  int tc; cin>>tc;
	  while(tc--){
	  	ac();
	  }
    return 0;
}
