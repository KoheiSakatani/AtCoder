#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int X,Y,Z; cin >> X >> Y >> Z;
  char c[X][Y][Z];
  char front[Y][Z];
  rep(z,Z){
    rep(x,X+1){
      if(x == X){
        rep(i,2){
          char tmp;
          cin >> tmp;
        }
      }
      if(x == X) continue;
      rep(y,Y){
        char tmp;
        cin >> tmp;
        c[x][y][z] = tmp;
      }

    }
  }
  int x = X-1;
  rep(y,Y){
    rep(z,Z){
      rep_rev(X-1,x){
        if(c[x][y][z] == '#') front[y][z] = '#';
      }
      if(front[y][z] != '#') front[y][z] = '.';
    }
  }
  rep_rev(Z-1,z){
    rep(y,Y){
      cout << front[y][z];
    }
    cout << endl;
  }
  return 0;
}
