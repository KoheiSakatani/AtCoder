#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

string S;
int N, l_m = 0, r_m = 0;
vector<vector<bool> > alphabet(26,vector<bool>(2));
int kind = 0;
int main(){
  cin >> N;
  cin >> S;
  rep(i,26){
    rep(j,1){
      alphabet[i][j] = false;
    }
  }
  rep(i,N){
    if(!alphabet[(S[i]-97)%26][0]){
      alphabet[((S[i]-97)%26)][0] = true;
    }
  }
  rep(i,N){
    int l_kind = 0, r_kind = 0;
    rep(j,N){
      if(j <= i){
        if(!alphabet[((S[j]-97)%26)][1]){
          l_kind++;
          alphabet[((S[j]-97)%26)][1] = true;
        }
      }
      else if(N > j){
        if(alphabet[((S[j]-97)%26)][1]){
          r_kind++;
          alphabet[((S[j]-97)%26)][1] = false;
        }
      }
    }
    rep(idx,26) alphabet[idx][1] = false;
    cout << "i = " << i << " l_kind = " << l_kind << " r_kind = " << r_kind << endl;

    if(l_m < l_kind) l_m = l_kind;
    if(r_m < r_kind) r_m = r_kind;
  }
  if(l_m > r_m) cout << r_m << endl;
  else cout << l_m << endl;
  return 0;
}
