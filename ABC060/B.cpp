#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

int A,B,C,N;
int r, t = -1;
int main(){
  cin >> A >> B >> C;
  N = A;
  r = A%B;
  t = r;
  if(r == C){
    cout << "YES" << endl;
    return 0;
  }

  while(r != C){
    N += A;
    r = N % B;
    //cout << N << " % " << B << " = " << r << endl;
    if(t == r){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
