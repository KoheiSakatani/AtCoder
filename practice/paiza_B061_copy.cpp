#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int S,N,ans = 0; cin >> S >> N;
  vector<int> v(N);
  rep(i,N) cin >> v[i];
  //rep(i,v.size()) cout << "v[" << i << "] = " << v[i] << endl;
  rep(i,N){
    if(S <= v[i]){
      v.erase(v.begin() + i);
      ans++;
    }
  }
  vector<bool> f(v.size());
  for(int bit = 1; bit <= pow(2,v.size())-1; ++bit){
    rep(j,v.size()) f[j] = false;
    int sum = 0,localmin = 10000000;
    cout << "bit = " << bit << endl;
    rep(j,v.size()){
      if(f[j] == false && bit >> j & 1){
        cout << "sum = " << sum << "にv[" << j << "] = " << v[j] << "をたす" << endl;
        sum += v[j];
        localmin = min(localmin,v[j]);
        if(sum >= S && sum - S < localmin){
          ans++;
          f[j] = true;
        }
      }
    }
    cout << "sum = " << sum << endl;
  }
  cout << ans << endl;
  return 0;
}
