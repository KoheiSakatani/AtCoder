#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string S; cin >> S;
  if(S[2] == S[3] && S[4] == S[5]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
