#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string s; cin >> s;
  int N = s.length();
  rep(i,(N-1)/2){
    if(s[i] != s[((N-1)/2) - 1 - i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  for(int i = ((N+3)/2) - 1; i < N; ++i){
    if(s[i] != s[N-1-i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
