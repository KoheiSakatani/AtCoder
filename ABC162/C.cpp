//∑_{a=1}^K ∑{b=1}^K ∑_{c=1}^K gcd(a,b,c) を求めてください。
//ただし、gcd(a,b,c) は a,b,c の最大公約数を表します。

#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int GCD2(int a, int b){
  if(a == b) return a;
  if(a < b){
    int tmp = a;
    a = b;
    b = tmp;
  }
  int r = a % b;
  while(r != 0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int GCD3(int a, int b, int c) { return GCD2(GCD2(a,b),c); }


int main(){
  int K, sum = 0; cin >> K;
  for(int i = 1; i <= K; ++i){
    for(int j = 1; j <= K; ++j){
      for(int l = 1; l <= K; ++l){
        sum += GCD3(i,j,l);
      }
    }
  }
  cout << sum << endl;
  return 0;
}
