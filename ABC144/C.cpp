#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
typedef pair<int, int> P;
const long long INF = 1LL << 60;
int dx[2] = {0,1}, dy[2] = {1,0};
ll N;
queue<P> q;
int main(){
  cin >> N;
  ll ans = N-1;
  for(int i = 1; i <= sqrt(N); ++i){
      if(N%i == 0 && ans > i+N/i-2) ans = i + N/i-2;
  }
  cout << ans << endl;
  return 0;
}
