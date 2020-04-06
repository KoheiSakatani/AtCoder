#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,ans = 0; cin >> N;
  map<string, int> mp;
  rep(i,N){
    string key;
    cin >> key;
    mp[key]++;
    if(ans < mp[key]) ans = mp[key];
  }
  for (auto const& entry: mp){
    int tmp = entry.second;
    if(ans == tmp) cout << entry.first << endl;
  }
  return 0;
}
