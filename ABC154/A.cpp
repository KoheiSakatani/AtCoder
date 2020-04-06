#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string S,T;
  cin >> S >> T;
  int A,B; cin >> A >> B;
  string U; cin >> U;
  if(U.compare(S) == 0) A--;
  else B--;
  cout << A << " " << B << endl;
  return 0;
}
