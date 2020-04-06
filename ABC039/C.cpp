#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string S; cin >> S;
  char oto[7][21] = {"WBWBWWBWBWBWWBWBWWBW",
                     "WBWWBWBWBWWBWBWWBWWB",
                     "WWBWBWBWWBWBWWBWBWBW",
                     "WBWBWBWWBWBWWBWBWBWW",
                     "WBWBWWBWBWWBWBWBWWBW",
                     "WBWWBWBWWBWBWBWWBWBW",
                     "WWBWBWWBWBWBWWBWBWWB"
                    };
  string o[7] = {"Do","Re","Mi","Fa","So","La","Si"};
  bool f;
  rep(i,7){
    f = false;
    rep(j,20){
      if(S[j] != oto[i][j]){
        f = true;
        break;
      }
    }
    if(!f) cout << o[i] << endl;
  }
  return 0;
}
