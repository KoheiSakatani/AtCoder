#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
using ll = long long;

const ll INF = 1LL << 60;
//10^9+7
const int mod = 1000000007;
struct mint{
  ll x;
  mint(ll x):x(x%mod){}
  mint& operator+=(const mint a) {
    (x += a.x) %= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    (x -= a.x) %= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res*=a;
  }
};

ll b,ten;

mint pow_(mint x, ll t) {
  if(t == 0) return 1;
  if(t%2 == 1) {
    return pow_(x,t-1)*x;
  } else {
    mint y = pow_(x,t/2);
    return y*y;
  }
}

ll f(ll l){
  if(l == 0) return 0;
  if(l%2 == 1){
    ll pl = l-1;
    ll x = f(pl);
    return (x*(ten%mod) + 1) % mod;
  } else {
    ll pl = l/2;
    ll x = f(pl);
    return (x*pow_(ten%mod, pl) + x) % mod;
  }
}
