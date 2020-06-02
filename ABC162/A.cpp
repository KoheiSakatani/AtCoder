//3桁の整数 N が与えられます。N のいずれかの桁に数字の 7 は含まれますか？
//含まれるなら Yes を、含まれないなら No を出力してください。

#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,d = 100; cin >> N;
  rep(i,3){
    if(N/d == 7){
      cout << "Yes" << endl;
      return 0;
    }
    N %= d; d /= 10;
  }
  cout << "No" << endl;
  return 0;
}
