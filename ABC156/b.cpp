#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,K; cin >> N >> K;
  int r = N, ans = 0;
  while(r >= K){
    r /= K;
    ans++;
  }
  cout << ans+1 << endl;
  return 0;
}
