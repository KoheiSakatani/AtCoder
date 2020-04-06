#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

char c[4][4];
bool f[4][4] = {{false}};
int main(){
  rep(i,4) rep(j,4) cin >> c[i][j];
  rep(i,4){
    rep(j,4){
      if(f[i][j] == false){
        char tmp = c[i][j];
        char tmp2 = c[3-i][3-j];
        c[i][j] = tmp2;
        c[3-i][3-j] = tmp;
        f[i][j] = f[3-i][3-j] = true;
      }
    }
  }
  rep(i,4){
    rep(j,4){
      cout << c[i][j];
      if(j != 3) cout << " ";
      else cout << endl;
    }
  }
}
