#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

ll H;

int main(){
  cin >> H;
  ll N = log2(H), ans = 0;
  rep(i,N+1) ans += pow(2,i);
  cout << ans << endl;
  return 0;
}
