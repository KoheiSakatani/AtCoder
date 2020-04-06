#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string S; cin >> S;
  int Q; cin >> Q;
  vector<int> T(Q);
  rep(i,Q){
    cin >> T[i];
    if(T[i] == 2){
      int F; cin >> F;
      char C; cin >> C;
      if(F == 1 && rev_flag == true){
        str.insert(S.begin()+0,C);
      }
      else if(F == 2) S.push_back(C);
    }
    else if(T[i] == 1){
      
    }
  }
  return 0;
}
