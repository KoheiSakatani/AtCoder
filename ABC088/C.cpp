#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int main(){
  vector<vector<int> > c(3,vector<int>(3));
  rep(i,3){
    rep(j,3){
      cin >> c[i][j];
    }
  }
  vector<int> r_min(3,10000), c_min(3,10000);
  r_min[0] = 0;
  rep(i,3) c_min[i] = c[0][i] - r_min[0];

  for(int i = 1; i < 3; ++i) r_min[i] = c[i][0] - c_min[0];

  //rep(i,3) cout << "r_min[" << i << "] = " << r_min[i] << " c_min[" << i << "] = " << c_min[i] << endl;
  rep(i,3){
    rep(j,3){
      if(r_min[i] + c_min[j] != c[i][j]){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
