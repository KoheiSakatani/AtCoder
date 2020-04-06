#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int rec(vector<int>& v, int idx, int S, int sum, int localmin){
  int ans = 0;
  if(idx >= v.size()) return ans;
  else{
    for(int i = idx; i < v.size(); ++i){
      sum += v[i];
      localmin = min(localmin,v[i]);
      if(sum >= S && sum - S <= localmin){
        ans++;
        sum -= v[i];
        continue;
      }
      ans += rec(v,i+1,S,sum,localmin);
      sum -= v[i];
    }
  }
  return ans;
}

int main(){
  int S,N,ans = 0,sum = 0; cin >> S >> N;
  int min_val = 10000000;
  vector<int> v(N);
  rep(i,N) cin >> v[i];
  rep(i,N){
    if(S <= v[i]){
      v.erase(v.begin() + i);
      ans++;
    }
  }
  sort(v.begin(),v.end());
  rep_rev(v.size()-1,i){
    sum = v[i];
    ans += rec(v,i+1,S,sum,v[i]);
  }
  cout << ans << endl;
  return 0;
}
