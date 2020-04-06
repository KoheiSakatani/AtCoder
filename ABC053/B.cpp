#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;

int main(){
  string s;
  cin >> s;
  static bool IsFirst = false;
  int A_idx, Z_idx = -1;
  rep(i,s.length()){
    if(s[i] == 'A' && !IsFirst){
      A_idx = i;
      IsFirst = true;
    }
    if(s[i] == 'Z' && Z_idx < i) Z_idx = i;
  }
  cout << Z_idx - A_idx + 1 << endl;
  return 0;
}
