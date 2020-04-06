#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int A,B,C; cin >> A>> B >> C;
  if((A == B && B == C) || (A != B && B != C && A != C)){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
  return 0;
}
