#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int a[100000];

int main(){
  int N; cin >> N;
  rep(i,N) cin >> a[i];
  map<int,int> mp;
  rep(i,N) mp[a[i]]++;
  int ans = 0;
  for(auto p :mp){
    int x = p.first;
    int y = p.second;
    if(y < x) ans += y;
    else ans += y - x;
  }
  cout << ans << endl;
  return 0;
}
