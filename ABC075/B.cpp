#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int H,W;
char S[100][100];
int dx[8] = {-1,-1,0,1,1,1,0,-1}, dy[8] = {0,-1,-1,-1,0,1,1,1};
char mine_map[100][100];
int main(){
  cin >> H >> W;
  rep(y,H) rep(x,W) cin >> S[y][x];
  
  rep(y,H){
    rep(x,W){
      if(S[y][x] == '#'){
        mine_map[y][x] = '#';
        continue;
      }
      int b = 0;
      rep(i,8){
        if(S[y + dy[i]][x + dx[i]] == '#') b++;
      }
      mine_map[y][x] = b + 48;
    }
  }
  rep(y,H){
    rep(x,W){
      cout << mine_map[y][x];
    }
    cout << endl;
  }
  return 0;
}
