#include <bits/stdc++.h>
typedef unsigned long long ull;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  int a,b; cin >> a >> b;
  if(N == 2){
    cout << "0" << endl;
    return 0;
  }
  int loop = N/2;
  ull sum = 0;
  ull x = 1, y = 1;
  bool a_f = false, b_f = false;
  for(int i = 0; i < loop; ++i){
    x *= (N - i) % 100000007;
    y *= (i + 1) % 100000007;
    ull tmp = x/y;
    cout << "tmp = " << tmp << endl;
    sum += 2 * tmp;
    if((N-1) % 2 == 1 && N / (i+1) == 2) sum -= tmp;
    if(!a_f && (a == N-i-1 || a == i+1)){
      sum -= tmp;
      a_f = true;
    }
    if(!b_f && (b == N-i-1 || b == i+1)){
      sum -= tmp;
      b_f = true;
    }
    cout << sum % 100000007 << endl;
  }
  if(a != N && b != N) sum++;
  cout << sum << endl;
  /*for(int i = 0; i < loop/2; ++i){
    x /= (N-i); y *= (i+1);
    sum += 2 * (total / (x * y));
    if((N-1) % 2 == 1 && N / (i+1) == 2) sum -= (total / (x * y));

    cout << sum << endl;
  }
  if(a != N && b != N) sum++;
  cout << sum % 100000007 << endl;*/
  return 0;
}
