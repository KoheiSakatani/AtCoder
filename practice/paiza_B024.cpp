#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  bool paint[1002][1002];
  float r; cin >> r;
  int ans = 0;
  rep(i,1001){
    rep(j,1001){
      paint[i][j] = false;
    }
  }

  for(float deg = 1.0; deg < 90; deg = deg + 0.01){
    double rad = deg * (M_PI/180.0);
    double x = r*cos(rad), y = r*sin(rad);
    int i = floor(x), j = floor(y);
    cout << "x = " << x << "y = " << y << endl;
    for(int dx = 0; dx <= i; ++dx){
      for(int dy = 0; dy <= j; ++dy){
        if(!paint[dx][dy]){
          paint[dx][dy] = true;
          //cout << "paint[" << dx << "][" << dy << "] = を塗りつぶした" << endl;
          ans++;
        }
      }
    }
  }

  cout << ans*4 << endl;
  return 0;
}
