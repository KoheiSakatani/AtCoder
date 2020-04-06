#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

ll N,sum = 0;

int main(){
  cin >> N;
  for(ll i = 1; i < N; ++i) sum += i;
  cout << sum << endl;
  return 0;
}
