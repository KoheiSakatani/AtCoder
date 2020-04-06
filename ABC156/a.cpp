#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,R; cin >> N >> R;
  if(N >= 10) cout << R << endl;
  else cout << R + 100*(10-N) << endl;
  return 0;
}
