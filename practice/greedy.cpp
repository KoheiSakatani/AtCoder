#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

const int v[6] = {1,5,10,50,100,500};
int C[6];
int A;
int ans = 0;
int main(){
  rep(i,5) cin >> C[i];
  cin >> A;
  rep_rev(5,i){
    int t = min(A/v[i], C[i]);
    ans += t;
  }
  cout << ans << endl;
  return 0;
}
