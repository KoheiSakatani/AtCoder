#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int T,x,y; cin >> T >> x >> y;
  int current_x = x, current_y = y, ans = x;
  vector<int> a(T),b(T);
  rep(i,T) cin >> a[i] >> b[i];
  rep(i,T){
    current_x += a[i];
    current_y += b[i];
    if(current_y <= 0) break;

    if(current_x > ans) ans = current_x;
  }
  cout << ans << endl;
  return 0;
}
